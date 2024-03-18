/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:18:25 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/18 17:22:18 by berard           ###   ########.fr       */
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
		std::stack<long>	getStack(void) const;

	private :
		RPN(void);
		std::stack<long>	_stackRPN;
};

#endif
