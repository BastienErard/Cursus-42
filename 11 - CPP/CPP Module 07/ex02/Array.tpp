/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:30:24 by tastybao          #+#    #+#             */
/*   Updated: 2024/02/18 18:03:59 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	_array = nullptr;
	_size = 0;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int const n)
{
	_size = n;
	_array = new T [n];
	return ;
}

template <typename T>
Array<T>::Array(Array const & src)
{
	_size = src._size;
	_array = new T [_size];
	for (unsigned int i = 0; i < _size ; i++)
		_array[i] = src._array[i];
	return ;
}

template <typename T>
Array<T>::~Array(void)
{
	if (_array)
		delete[] _array;
	return ;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const & rhs)
{
	if (_array)
		delete[] _array;
	_size = rhs._size;
	_array = new T [_size];
	for (unsigned int i = 0; i < _size ; i++)
		_array[i] = rhs._array[i];
	return *this;
}

template <typename T>
T		&Array<T>::operator[](unsigned int const i)
{
	if (i < 0 || i >= _size)
		throw IndexIsOutOfBounds();
	return (_array[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

#endif
