/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:09:29 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/23 21:07:00 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class ScalarConverter
{
	public :
		static void	convert(std::string str);

	private :
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter(void);

		ScalarConverter &operator=(ScalarConverter const & rhs);

		static std::string	getType(std::string str);
		static void			chooseConvert(std::string type, std::string str);
		static void			charToOthers(std::string str);
		static void			intToOthers(int nb);
		static void			floatToOthers(float nb);
		static void			doubleToOthers(double nb);
		static void			convertChar(char c);
		static void			convertInt(int nb);
		static void			convertFloat(float nb);
		static void			convertDouble(double nb);
		static void			printSpecialValue(std::string str);



};

#endif
