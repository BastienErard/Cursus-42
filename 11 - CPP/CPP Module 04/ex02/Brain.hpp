/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berard <berard@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:04:58 by berard            #+#    #+#             */
/*   Updated: 2023/10/16 15:35:29 by berard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
			Brain(void);
			Brain(Brain const & src);
			~Brain(void);

			Brain &operator=(Brain const & rhs);
			std::string	getIdeas(int i) const;
			void		setIdeas(int i, std::string const str);
	private :
		std::string	_ideas[100];
};

#endif
