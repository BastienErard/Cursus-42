/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:29:24 by tastybao          #+#    #+#             */
/*   Updated: 2024/03/22 13:11:16 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

class PmergeMe
{
	public :
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(PmergeMe const & src);

		PmergeMe	&operator=(PmergeMe const & rhs);

	private :
};

#endif
