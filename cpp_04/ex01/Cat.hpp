/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:23 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 18:06:39 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat& other);
		virtual ~Cat(void);					// 가상 소멸자
		Cat& operator=(const Cat& other);
		
		virtual void makeSound(void) const;	// 가상 함수 - 소리 내는 함수

		std::string	getIdea(int i);
		void		setIdea(int i, std::string idea);
};

#endif