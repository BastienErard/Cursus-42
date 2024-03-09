echo "\ MARIADB /"

# Initialise the database
mysqld --initialize --user=mysql --datadir=/var/lib/mysql;

# Modifie the owners and groups of the directories
chown -R mysql:mysql /var/lib/mysql;
chown -R mysql:mysql /run/mysqld;

# Launch of mariadb in the background
mysqld --user=mysql --datadir=/var/lib/mysql &

pid=$!

# Waiting for the end of the mariadb launch
sleep 10

# Database configuration
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "ALTER USER 'root'@'localhost' IDENTIFIED BY '${MARIADB_ROOT_PASSWORD}';"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "CREATE DATABASE IF NOT EXISTS ${MARIADB_DB_NAME};"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "CREATE USER IF NOT EXISTS '${MARIADB_USER}' IDENTIFIED BY '${MARIADB_PASS}';"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "GRANT ALL PRIVILEGES ON *.* TO '${MARIADB_USER}';"
mysql -u root -p${MARIADB_ROOT_PASSWORD} -e "FLUSH PRIVILEGES;"

# Kill mysqld
kill "$pid"

# Replacing the shell process with mysqld
exec mysqld --user=mysql --datadir=/var/lib/mysql
