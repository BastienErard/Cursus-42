/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:04:56 by berard            #+#    #+#             */
/*   Updated: 2023/10/13 14:55:28 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const & src)
{
	int	i = -1;
	std::cout << "Brain copy constructor called" << std::endl;
	while (++i < 100)
		_ideas[i] = src._ideas[i];
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain	&Brain::operator=(Brain const & rhs)
{
	int	i = -1;

	std::cout << "Copy assignment operator called" << std::endl;
	while (++i < 100)
		_ideas[i] = rhs._ideas[i];
	return *this;
}
