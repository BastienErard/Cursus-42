/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:09:29 by tastybao          #+#    #+#             */
/*   Updated: 2024/01/20 17:04:32 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

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


};

#endif
