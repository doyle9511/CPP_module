/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:24:10 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:33:24 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>

class	Animal {
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);					// 가상 소멸자
		Animal& operator=(const Animal& other);
	
		std::string getType(void) const;		// 타입 반환 함수
		virtual void makeSound(void) const;		// 가상 함수 - 소리 내는 함수
			// 오버라이딩 돼서, 부모 포인터로 호출해도 객체 타입에 맞는 함수 자동실행되는 기능

};

#endif