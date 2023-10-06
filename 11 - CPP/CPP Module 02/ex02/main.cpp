/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:54:13 by tastybao          #+#    #+#             */
/*   Updated: 2023/10/06 16:50:52 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	std::cout << "THIS IS THE BASIC PROGRAM PROPOSED BY THE EXERCICE" << std::endl;
	std::cout << std::endl;

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << "THIS CONCERNS SOME ARTITHMETIC CALCULATIONS" << std::endl;
	std::cout << std::endl;

	Fixed c(4);
	Fixed d(2);

	Fixed result1 = c + d;
	Fixed result2 = c - d;
	Fixed result3 = c * d;
	Fixed result4 = c / d;

	std::cout << "Value of c is " << c << " and value of d is " << d << std::endl;
	std::cout << "Addition: " << result1 << std::endl;
	std::cout << "Subtraction: " << result2 << std::endl;
	std::cout << "Multiplication: " << result3 << std::endl;
	std::cout << "Division: " << result4 << std::endl;

	std::cout << std::endl;
	std::cout << "THIS CONCERNS THE 6 COMPARISON OPERATORS" << std::endl;
	std::cout << std::endl;

	Fixed e(4);
	Fixed f(4);
	Fixed g(2);

	std::cout << "e == f: " << (e == f) << std::endl;
	std::cout << "e != g: " << (e != g) << std::endl;
	std::cout << "e < g: " << (e < g) << std::endl;
	std::cout << "e >= f: " << (e >= f) << std::endl;
	std::cout << "e > g: " << (e > g) << std::endl;
	std::cout << "e <= f: " << (e >= f) << std::endl;

	return 0;
}
