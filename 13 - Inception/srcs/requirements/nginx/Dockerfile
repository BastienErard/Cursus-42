FROM	debian:buster

# Install NGINX
RUN		apt-get update && \
		apt-get upgrade -y && \
		apt-get install -y nginx

#Install OPENSSL and configure the certificate
RUN		apt install openssl -y
RUN		mkdir -p /etc/nginx/ssl
RUN		openssl req -x509 -nodes -out /etc/nginx/ssl/inception.crt -keyout /etc/nginx/ssl/inception.key -subj "/C=CH/ST=VD/L=Lausanne/O=42/OU=42/CN=berard.42.ch/emailAddress=berard@student.42.fr"

# Creating directories and changing rights
RUN		mkdir -p /var/run/nginx
RUN		mkdir -p /var/www/wordpress
RUN		chmod -R 755 /var/www/wordpress
RUN		chown -R www-data:www-data /var/www/wordpress

# Copy configuration file
COPY	conf/nginx.conf /etc/nginx/nginx.conf
COPY	index.html /var/www/wordpress

# Port display 443 is the port required for the SSL protocol (https)
EXPOSE	443

#Run the Nginx web server in foreground mode, using the configuration specified
CMD		["nginx", "-g", "daemon off;"]
