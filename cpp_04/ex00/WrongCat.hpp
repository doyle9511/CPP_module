/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:23 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:05:10 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		~WrongCat(void);					// 가상 소멸자
		WrongCat& operator=(const WrongCat& other);
		
		void makeSound(void) const;	// 가상 함수 - 소리 내는 함수
};


#endif