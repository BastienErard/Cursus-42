/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:23 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/26 19:58:59 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char *argv[])
{
	Str	Str;
	std::
	std::ifstream	Input(av[1]);
	std::ofstream	Output(OutputFile);



	if (argc != 4)
	{
		std::cout << "Please enter a filename and two strings. No more, nos less." << std::endl;
		return (1);
	}
	Str.RegisterStr(argv[2], argv[3]);
	return (0);
}
