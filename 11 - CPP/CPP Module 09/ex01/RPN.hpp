/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:18:25 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/19 17:49:33 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>

class RPN
{
	public :
		RPN(std::string param);
		RPN(RPN const & src);
		~RPN(void);

		RPN	&operator=(RPN const & rhs);

		void	checkCharacter(char c);
		void	processingStack(char c);
		void	calculation(char c);
		void	displayResult(void);
		std::stack<long>	getStack(void) const;

	private :
		RPN(void);
		std::stack<long>	_stackRPN;
};

#endif
