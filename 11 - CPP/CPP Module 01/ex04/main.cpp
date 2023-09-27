/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:35:23 by tastybao          #+#    #+#             */
/*   Updated: 2023/09/27 19:25:23 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char *argv[])
{
	Str	Str;
	std::string	OutputFile;

	if (argc != 4)
	{
		std::cout << "Please enter a filename and two strings. No more, nos less." << std::endl;
		return (1);
	}
	OutputFile = (std::string)argv[1] + (std::string)".replace";
	std::cout << OutputFile << std::endl;
	std::ifstream	Input(argv[1]);
	if (Input.fail())
	{
		std::cout << "Error when opening file <" << argv[1] << ">." << std::endl;
		return (1);
	}
	std::ofstream	Output(OutputFile);
	if (Output.fail())
	{
		std::cout << "Error when opening file <" << OutputFile << ">." << std::endl;
		Input.close();
		return (1);
	}
	Str.RegisterStr(argv[2], argv[3]);
	return (0);
}
