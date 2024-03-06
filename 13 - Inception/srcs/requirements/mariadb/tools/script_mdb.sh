# echo "------------------------------- MARIADB START -------------------------------------"

# service mysql start;

# # mysql -e "CREATE DATABASE IF NOT EXISTS \`${SQL_DATABASE}\`;"
# mysql -e "CREATE USER IF NOT EXISTS \`${SQL_USER}\`@'localhost' IDENTIFIED BY '${SQL_PASSWORD}';"
# mysql -e "GRANT ALL PRIVILEGES ON \`${SQL_DATABASE}\`.* TO \`${SQL_USER}\`@'%' IDENTIFIED BY '${SQL_PASSWORD}';"
# mysql -e "ALTER USER 'root'@'localhost' IDENTIFIED BY '${SQL_ROOT_PASSWORD}';"
# mysql -e "FLUSH PRIVILEGES;"
# mysqladmin -u root -p$SQL_ROOT_PASSWORD shutdown
# exec mysqld_safe

echo "------------------------------- MARIADB START -------------------------------------"

# Initialisation de la base de données
mysqld --initialize --user=mysql --datadir=/var/lib/mysql;

# chown -R mysql:mysql /var/lib/mysql;
# chown -R mysql:mysql /run/mysqld;

# Lancement de mariadb en arrière plan
mysqld --user=mysql --datadir=/var/lib/mysql &

pid=$!

# Attente de la fin de lancement de mariadb
sleep 10

# Configuration de la base de données
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "ALTER USER 'root'@'localhost' IDENTIFIED BY '${MARIADB_ROOT_PASSWORD}';"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "CREATE DATABASE IF NOT EXISTS ${MARIADB_DB_NAME};"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "CREATE USER IF NOT EXISTS '${MARIADB_USER}' IDENTIFIED BY '${MARIADB_PASS}';"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "GRANT ALL PRIVILEGES ON *.* TO '${MARIADB_USER}';"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "FLUSH PRIVILEGES;"

# Affichage des bases de données dans le terminal
echo "------------------\n"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "SHOW DATABASES;"
echo "------------------\n"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "SELECT User FROM mysql.user"
echo "------------------\n"

# Kill de mysqld
kill "$pid"

# Remplacement du processus shell par mysqld
exec mysqld --user=mysql --datadir=/var/lib/mysql
