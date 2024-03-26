/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:29:24 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/26 22:04:39 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <deque>
#include <iterator>

class PmergeMe
{
	public :
		PmergeMe(void);
		PmergeMe(std::deque<int> deque_pre_sort, std::vector<int> vector_pre_sort);
		PmergeMe(PmergeMe const & src);
		~PmergeMe(void);

		PmergeMe	&operator=(PmergeMe const & rhs);

	private :
		std::deque<int>		_deque_pre_sort;
		std::deque<int>		_deque_sorted;
		std::vector<int>	_vector_pre_sort;
		std::vector<int>	_vector_sorted;
		double				_time_deque;
		double				_time_vector;

		void	display(void) const;
		void	sortDeque(std::deque<int> &deque_to_sort);
		void	mergeDeque(std::deque<int> &left_deque, std::deque<int> &right_deque, std::deque<int> &deque_to_sort);
		void	sortVector(std::vector<int> &vector_to_Sort);
		void	mergeVector(std::vector<int> &left_vector, std::vector<int> &right_vector, std::vector<int> &vector_to_sort);
};

#endif
