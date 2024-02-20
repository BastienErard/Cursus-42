/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:54 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/20 13:17:07 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{

	class SpanAlreadyFull : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Span is already full");
			}
	};

	class ImpossibleToCompare : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Distance not found, as there are not enough numbers.");
			}
	};

	public :
		Span(unsigned int n);
		Span(Span const & src);
		~Span(void);

		Span	&operator=(Span const & rhs);

		void				addNumber(int number);
		void				addRange(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		int					shortestSpan(void);
		int					longestSpan(void);
		std::vector<int>	getNumbers(void) const;
		unsigned int		getSize(void) const;
	private :
		Span(void);
		std::vector<int>	_numbers;
		unsigned int		_maxSize;
};

#endif
