/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:29:13 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/26 22:00:33 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	return ;
}

PmergeMe::PmergeMe(std::deque<int> deque_pre_sort, std::vector<int> vector_pre_sort)
{
	_deque_pre_sort = deque_pre_sort;
	_deque_sorted = deque_pre_sort;
	_vector_pre_sort = vector_pre_sort;
	_vector_sorted = vector_pre_sort;

	clock_t	start_deque = clock();
	sortDeque(_deque_sorted);
	clock_t	end_deque = clock();
	_time_deque = static_cast<double>(end_deque - start_deque) / CLOCKS_PER_SEC * 1000;

	clock_t	start_vector = clock();
	sortVector(_vector_sorted);
	clock_t	end_vector = clock();
	_time_vector = static_cast<double>(end_vector - start_vector) / CLOCKS_PER_SEC * 1000;
	display();
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	*this = src;
	return ;
}

PmergeMe::~PmergeMe(void)
{
	return ;
}

PmergeMe	&PmergeMe::operator=(PmergeMe const & rhs)
{
	_deque_pre_sort = rhs._deque_pre_sort;
	_vector_pre_sort = rhs._vector_pre_sort;
	_vector_sorted = rhs._vector_sorted;
	_deque_sorted = rhs._deque_sorted;
	_time_deque = rhs._time_deque;
	_time_vector = rhs._time_vector;
	return *this;
}

void	PmergeMe::display(void) const
{
	std::cout << "Before: ";
	for (size_t i = 0; i < _deque_pre_sort.size(); i++)
		std::cout << _deque_pre_sort[i] << " ";
	std::cout << std::endl;
	std::cout << "After: ";
	for (size_t i = 0; i < _deque_sorted.size(); i++)
		std::cout << _deque_sorted[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _deque_sorted.size() << "elements with std::deque<int> : " << _time_deque << " us" << std::endl;
	std::cout << "Time to process a range of " << _vector_sorted.size() << "elements with std::vector<int> : " << _time_vector << " us" << std::endl;
	if (_deque_sorted == std::deque<int>(_vector_sorted.begin(), _vector_sorted.end()))
		std::cout << "The sorted sequences are equal." << std::endl;
	else
		std::cout << "The sorted sequences are not equal." << std::endl;
}

void	PmergeMe::sortDeque(std::deque<int> &deque_to_sort)
{
	if (deque_to_sort.size() <= 1)
		return;
	size_t	half = deque_to_sort.size() / 2;
	std::deque<int>	left_half(deque_to_sort.begin(), deque_to_sort.begin() + half);
	std::deque<int>	right_half(deque_to_sort.begin() + half, deque_to_sort.end());

	sortDeque(left_half);
	sortDeque(right_half);

	mergeDeque(left_half, right_half, deque_to_sort);
}

void	PmergeMe::mergeDeque(std::deque<int> &left_deque, std::deque<int> &right_deque, std::deque<int> &deque_to_sort)
{
	std::deque<int>::iterator it_left = left_deque.begin();
	std::deque<int>::iterator ite_left = left_deque.end();
	std::deque<int>::iterator it_right = right_deque.begin();
	std::deque<int>::iterator ite_right = right_deque.end();
	std::deque<int>::iterator it_target = deque_to_sort.begin();
	while (it_left != ite_left && it_right != ite_right)
	{
		if (*it_left <= *it_right)
		{
			*it_target = *it_left;
			it_left++;
		}
		else
		{
			*it_target = *it_right;
			it_right++;
		}
		it_target++;
	}
	std::copy(it_left, ite_left, it_target);
	std::copy(it_right, ite_right, it_target);
}

void	PmergeMe::sortVector(std::vector<int> &vector_to_sort)
{
	if (vector_to_sort.size() <= 1)
		return ;
	size_t	half = vector_to_sort.size() / 2;
	std::vector<int>	left_half(vector_to_sort.begin(), vector_to_sort.begin() + half);
	std::vector<int>	right_half(vector_to_sort.begin() + half, vector_to_sort.end());

	sortVector(left_half);
	sortVector(right_half);

	mergeVector(left_half, right_half, vector_to_sort);
}

void	PmergeMe::mergeVector(std::vector<int> &left_vector, std::vector<int> &right_vector, std::vector<int> &vector_to_sort)
{
	std::vector<int>::iterator it_left = left_vector.begin();
	std::vector<int>::iterator ite_left = left_vector.end();
	std::vector<int>::iterator it_right = right_vector.begin();
	std::vector<int>::iterator ite_right = right_vector.end();
	std::vector<int>::iterator it_target = vector_to_sort.begin();
	while (it_left != ite_left && it_right != ite_right)
	{
		if (*it_left <= *it_right)
		{
			*it_target = *it_left;
			it_left++;
		}
		else
		{
			*it_target = *it_right;
			it_right++;
		}
		it_target++;
	}
	std::copy(it_left, ite_left, it_target);
	std::copy(it_right, ite_right, it_target);
}
