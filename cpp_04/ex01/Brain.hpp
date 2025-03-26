/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:38:05 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 17:30:32 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &source);
		~Brain();
		Brain	&operator=(const Brain &other);

		std::string	getIdea(int i);
		void		setIdea(int i, std::string idea);
};

#endif
