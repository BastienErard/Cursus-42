FROM	debian:buster

# Install mariaDB
RUN		apt-get update && \
		apt-get upgrade -y && \
		apt-get install mariadb-server -y

# Creating directories and changing rights
RUN		mkdir -p /run/mysqld /var/lib/mysql

# Copy configuration file and the script and grant access to execute
COPY	conf/50-server.cnf	/etc/mysql/mariadb.conf.d/50-server.cnf
COPY	tools/script_mdb.sh /usr/local/script_mdb.sh
RUN 	chmod +x /usr/local/script_mdb.sh

# Port display 3306 to communicate between Wordpress and mariaDB
EXPOSE	3306

# Run MariaDB on
ENTRYPOINT	["sh", "/usr/local/script_mdb.sh"]
