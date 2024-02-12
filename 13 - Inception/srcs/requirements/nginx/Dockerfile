FROM	debian:buster

# Install NGINX
RUN		apt update && \
		apt upgrade && \
		apt install nginx -y

# Remove temporary files resulting apt update
# RUN		rm -rf /var/lib/apt/lists/*

# Install OPENSSL and configure the certificate
RUN		apt install openssl -y
RUN		mkdir -p /etc/nginx/ssl
RUN		openssl req -x509 -nodes -out /etc/nginx/ssl/inception.crt -keyout /etc/nginx/ssl/inception.key -subj "/C=CH/ST=VD/L=Lausanne/O=42/OU=42/CN=berard.42.ch/emailAddress=berard@student.42.fr"

# Creating directories and changing rights
RUN		mkdir -p /var/run/nginx

# Copy configuration file
COPY	conf/nginx.conf /etc/nginx/nginx.conf
