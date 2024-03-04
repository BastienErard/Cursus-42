FROM	debian:buster

# Install wget to download files from the web
RUN		apt-get update && \
		apt-get upgrade -y && \
		apt-get -y install wget

# Install php7.3 and php-fpm to manage .php
# Install mysql and maria-db client to handle .sql
RUN 	apt-get install -y php7.3\
						php-fpm\
						php-mysql\
						mariadb-client

# Creating directory for php
RUN		mkdir -p /run/php

# Copy configuration file && change the rights
COPY	conf/www.conf /etc/php/7.3/fpm/pool.d/www.conf
COPY	tools/script_wdp.sh /usr/local/script_wdp.sh
RUN		chmod +x /usr/local/script_wdp.sh

# Install CLI to configure wordpress afterwards
RUN		wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar
RUN		chmod +x wp-cli.phar
RUN		mv wp-cli.phar /usr/local/bin/wp

# Port display 9000
EXPOSE	9000

# Run Wordpress (script)
CMD		["sh", "/usr/local/script_wdp.sh"]
