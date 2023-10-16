/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:04:56 by berard            #+#    #+#             */
/*   Updated: 2023/10/16 15:35:18 by berard           ###   ########.fr       */
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

std::string	Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
		return _ideas[i];
	else
		return "There seems to be no sign of intelligent life";
}

void	Brain::setIdeas(int i, std::string const str)
{
	if (i >= 0 && i < 100)
		_ideas[i] = str;
}
