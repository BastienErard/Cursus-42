/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:31:48 by berard            #+#    #+#             */
/*   Updated: 2022/10/28 18:13:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("______isalpha______\n");
	printf("%d\n", ft_isalpha('-'));
	printf("%d\n", isalpha('-'));
	printf("______isdigit______\n");
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", isdigit('4'));
	printf("______isalnum______\n");
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", isalnum('4'));
	printf("______isascii______\n");
	printf("%d\n", ft_isascii('&'));
	printf("%d\n", isascii('&'));
	printf("______isprint______\n");
	printf("%d\n", ft_isprint('\t'));
	printf("%d\n", isprint('\t'));
	printf("______strlen______\n");
	printf("%zu\n", ft_strlen("Test"));
	printf("%lu\n", strlen("Test"));
	printf("______memset______\n");
	char	tab[] = "Ceci est un test";
	printf("%s\n", ft_memset(tab, '+', 5));
	printf("%s\n", memset(tab, '+', 6));
	printf("______bzero______\n");
	ft_bzero(tab, 5);
	printf("%s\n", tab);
	printf("%s\n", bzero(tab, 5));
	printf("______memcpy______\n");
	char	dest[10];
	char	src[] = "Bravo, tu as fait juste!";
	printf("%s\n", ft_memcpy(dest, src, 5));
	printf("%s\n", memcpy(dest, src, 5));
	printf("______memmove______\n");
	char	dst[10];
	char	srco[] = "Bravo, tu as fait juste!";
	printf("%s\n", ft_memmove(dst, srco, 5));
	printf("%s\n", memmove(dst, srco, 5));
	printf("______toupper______\n");
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", toupper('c'));
	printf("______tolower______\n");
	printf("%c\n", ft_tolower('C'));
	printf("%c\n", tolower('C'));
	printf("______strchr______\n");
	printf("%s\n", ft_strchr("Super bravo", 'v'));
	printf("%s\n", strchr("Super bravo", 'v'));
	printf("______strrchr______\n");
	printf("%s\n", ft_strrchr("Super bravao", 'a'));
	printf("%s\n", strrchr("Super bravao", 'a'));
	printf("______strncmp______\n");
	printf("%d\n", ft_strncmp("Vacances", "Vacanxes", 7));
	printf("%d\n", strncmp("Vacances", "Vacanxes", 7));
	printf("______memchr______\n");
	unsigned char	tabmem[] = "vacances";
	printf("%s\n", ft_memchr(tabmem, 'c', 7));
	printf("%s\n", memchr(tabmem, 'c', 7));
	printf("______memcmp______\n");
	printf("%d\n", ft_memcmp("Vacances", "Vacanxes", 7));
	printf("%d\n", memcmp("Vacances", "Vacanxes", 7));
	printf("______strnstr______\n");
	printf("%s\n", ft_strnstr("Vacances supers", "ances", 10));
	printf("%s\n", strnstr("Vacances supers", "ances", 10));
	printf("______atoi______\n");
	printf("%d\n", ft_atoi("     -33121das"));
	printf("%d\n", atoi("     -33121das"));
	printf("______putchar_fd______\n");
	ft_putchar_fd('c', 1);
	printf("\n");
	printf("______putstr_fd______\n");
	ft_putstr_fd("C'est juste!", 1);
	printf("\n");
	printf("______putendl_fd______\n");
	ft_putendl_fd("C'est juste, la revanche!", 1);
	printf("______putnbr_fd______\n");
	ft_putnbr_fd(535, 1);
	printf("\n");
	return (0);
}
