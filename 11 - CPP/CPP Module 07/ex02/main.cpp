/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:30:10 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/18 19:28:58 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main(void)
{
	try
	{
		std::cout << "\033[1;34m--- Create an empty array ---\033[0m" << std::endl;
		Array<int>	test1;
		std::cout << "Size is " << test1.size() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Create an array with 3 float ---\033[0m" << std::endl;
		unsigned int	size = 3;
		Array<float>	test2(size);
		test2[0] = 0.32f;
		test2[1] = 5.32f;
		test2[2] = 10.23f;
		std::cout << "Size is " << test2.size() << std::endl;
		for (unsigned int i = 0; i < size; i++)
			std::cout << "array[" << i << "] = " << test2[i] << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- Create an array and trying to be out of range ---\033[0m" << std::endl;
		unsigned int	size2 = 2;
		Array<int>	test3(size2);
		test3[0] = 10;
		test3[1] = 15;
		std::cout << "Size is " << test3.size() << std::endl;
		std::cout << "Trying to access to the index 5" << std::endl;
		std::cout << test3[5] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}

	try
	{
		std::cout << "\033[1;34m--- A few operations for the = operator ---\033[0m" << std::endl;
		Array<std::string>	test4(3);
		test4[0] = "Super";
		test4[1] = "Génial";
		test4[2] = "Fantastique";
		std::cout << "Size is " << test4.size() << std::endl;
		std::cout << "Here are the words for test 4; " << test4[0] << ", " << test4[1] << ", " << test4[2] << "." << std::endl;
		Array<std::string>	test5;
		test5 = test4;
		std::cout << "Here are the words for test 5; " << test5[0] << ", " << test5[1] << ", " << test5[2] << "." << std::endl;
		test4[1] = "Terrible";
		std::cout << "Change one element in a chain and not in the other ; " << test4[1] << " vs " << test5[1] << "." << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
