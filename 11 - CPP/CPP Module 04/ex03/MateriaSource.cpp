/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:31:58 by berard            #+#    #+#             */
/*   Updated: 2023/10/20 17:04:01 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _nb(0)
{
	int	i = -1;

	std::cout << "MateriaSource default constructor called" << std::endl;

	while (++i < 4)
		_stock[i] = nullptr;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	int	i = -1;

	std::cout << "MateriaSource copy constructor called" << std::endl;

	_nb = src._nb;
	while (++i < 4)
	{
		if (src._stock[i])
			_stock[i] = src._stock[i]->clone();
		else
			_stock[i] = nullptr;
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	int	i = -1;

	std::cout << "MateriaSource destructor called" << std::endl;

	while (++i < 4)
		delete _stock[i];
	return;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int	i = -1;

	std::cout << "MateriaSource copy assignment operator called" << std::endl;

	_nb = rhs._nb;
	while (++i < 4)
	{
		if (_stock[i])
			delete _stock[i];
		if (!rhs._stock[i])
			_stock[i] = nullptr;
		else
			_stock[i] = rhs._stock[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (_stock[_nb])
		delete _stock[_nb];
	_stock[_nb] = materia;
	if (_nb == 3)
		_nb = 0;
	else
		_nb++;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = -1;

	while (++i < 4)
	{
		if (_stock[i] && _stock[i]->getType() == type)
		{
			AMateria *materia = _stock[i]->clone();
			return materia;
		}
	}
	return 0;
}
