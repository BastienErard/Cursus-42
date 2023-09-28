/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:32:28 by berard            #+#    #+#             */
/*   Updated: 2023/09/28 15:30:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	std::cout << "DEBUG :" << std::endl;
	Harl.complain("debug");

	std::cout << "INFO :" << std::endl;
	Harl.complain("info");

	std::cout << "WARNING :" << std::endl;
	Harl.complain("warning");

	std::cout << "ERROR" << std::endl;
	Harl.complain("error");

	std::cout << "END" << std::endl;
	std::cout << "This is the end" << std::endl;
	return (0);
}
