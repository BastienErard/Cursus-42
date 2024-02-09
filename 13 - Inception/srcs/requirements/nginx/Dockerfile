FROM	debian:buster

RUN		apt update && \
		apt upgrade && \
		apt install nginx -y && \
		apt install openssl -y

# Remove temporary files resulting apt update
RUN		rm -rf /var/lib/apt/lists/*

RUN		mkdir -p /etc/nginx/ssl
