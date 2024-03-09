echo "\ WORDPRESS START /"

# Displays the installed PHP-FPM version
php-fpm7.3 -v

# Loop until mariaDB is launched
while ! mariadb -u $MARIADB_USER --password=$MARIADB_PASS -h mariadb -P 3306 --silent; do
	sleep 5
	echo "Waiting for mariaDB"
done

# Install wordpress if not already done
if [ -e /var/www/wordpress/wp-config.php ]
then
	echo "wordpress already downloaded"
else
	# Install wordpress
	cd /var/www/wordpress
	wp core download --allow-root

	# Configuring wordpress: connecting to the database and creating wordpress users
	wp config create --dbname=$MARIADB_DB_NAME --dbuser=$MARIADB_USER --dbpass=$MARIADB_PASS --dbhost=$WP_HOST --dbcharset="utf8" --dbcollate="utf8_general_ci" --allow-root
	wp core install --url=$DOMAIN_NAME --title=$WP_TITLE --admin_user=$WP_ADMIN_USER --admin_password=$WP_ADMIN_PASSWORD --admin_email=$WP_ADMIN_EMAIL --skip-email --allow-root
	wp user create $WP_USER $WP_USER_EMAIL --role=author --user_pass=$WP_USER_PASS --allow-root
fi

# Launch php-fpm
php-fpm7.3 -F
