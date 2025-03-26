/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:24:10 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:33:24 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CPP
#define WRONGANIMAL_CPP

#include <iostream>

class	WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal(void);					// 가상 소멸자
		WrongAnimal& operator=(const WrongAnimal& other);
	
		std::string getType(void) const;		// 타입 반환 함수
		void makeSound(void) const;		// 가상 함수 - 소리 내는 함수
			// 오버라이딩 돼서, 부모 포인터로 호출해도 객체 타입에 맞는 함수 자동실행되는 기능

};

#endif