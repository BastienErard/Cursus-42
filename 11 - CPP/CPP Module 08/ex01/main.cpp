/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:57 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/20 13:30:16 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		std::cout << "\033[1;34m--- Normal and small span ---\033[0m" << std::endl;
		Span	test1(5);
		for (int i = 0; i < 5; i++)
			test1.addNumber(i);
		std::cout << "Maximum size is " << test1.getSize() << std::endl;
		std::cout << "Shortest span is " << test1.shortestSpan() << std::endl;
		std::cout << "Longest span is " << test1.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Add a number in a full span ---\033[0m" << std::endl;
		Span	test2(5);
		for (int i = 0; i < 7; i++)
			test2.addNumber(i);
		std::cout << "Maximum size is " << test2.getSize() << std::endl;
		std::cout << "Shortest span is " << test2.shortestSpan() << std::endl;
		std::cout << "Longest span is " << test2.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Find the shortest or longest span with 1 number ---\033[0m" << std::endl;
		Span	test3(5);
		for (int i = 0; i < 1; i++)
			test3.addNumber(i);
		std::cout << "Maximum size is " << test3.getSize() << std::endl;
		std::cout << "Shortest span is " << test3.shortestSpan() << std::endl;
		std::cout << "Longest span is " << test3.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Span with 10000 numbers ---\033[0m" << std::endl;
		Span	test4(10000);
		for (int i = 0; i < 10000; i++)
			test4.addNumber(i);
		std::cout << "Maximum size is " << test4.getSize() << std::endl;
		std::cout << "Shortest span is " << test4.shortestSpan() << std::endl;
		std::cout << "Longest span is " << test4.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Add multiple numbers with a range of iterators ---\033[0m" << std::endl;
		Span				test5(10);
		std::vector<int>	temp;
		for (int i = 0; i < 5; i++)
			temp.push_back(i);
		test5.addRange(temp.begin(), temp.end());
		std::cout << "Maximum size is " << test5.getSize() << std::endl;
		std::cout << "Shortest span is " << test5.shortestSpan() << std::endl;
		std::cout << "Longest span is " << test5.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Add multiple numbers with a range of iterators in a half full span ---\033[0m" << std::endl;
		Span				test6(10);
		for (int i = 5; i < 10; i++)
			test6.addNumber(i);
		std::vector<int>	temp;
		for (int i = 0; i < 6; i++)
			temp.push_back(i);
		test6.addRange(temp.begin(), temp.end());
		std::cout << "Maximum size is " << test6.getSize() << std::endl;
		std::cout << "Shortest span is " << test6.shortestSpan() << std::endl;
		std::cout << "Longest span is " << test6.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
