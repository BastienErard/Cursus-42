FROM	debian:buster

# Install mariaDB
RUN		apt-get update && \
		apt-get upgrade -y && \
		apt-get install mariadb-server -y

# Creating directories and changing rights
RUN		mkdir -p /run/mysqld /var/lib/mysql
RUN		chmod -R 755 /run/mysqld /var/lib/mysql
RUN		chown -R mysql:mysql /var/lib/mysql;
RUN		chown -R mysql:mysql /run/mysqld;

# Copy configuration file and the script and grant access to execute
COPY	conf/50-server.cnf	/etc/mysql/mariadb.conf.d/50-server.cnf
COPY	tools/script_mdb.sh /usr/local/script_mdb.sh
RUN 	chmod +x /usr/local/script_mdb.sh

# Port display 3306 to communicate between Wordpress and mariDB
EXPOSE	3306

# Run MariaDB on
CMD		["sh", "/usr/local/script_mdb.sh"]
