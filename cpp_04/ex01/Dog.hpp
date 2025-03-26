/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:23 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 18:56:16 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog& other);
		virtual ~Dog(void);					// 가상 소멸자
		Dog& operator=(const Dog& other);
		
		virtual void makeSound(void) const;	// 가상 함수 - 소리 내는 함수

		std::string	getIdea(int i);
		void		setIdea(int i, std::string idea);
};


#endif