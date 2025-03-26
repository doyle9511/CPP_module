/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:34:49 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:24:43 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal 기본생성자" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type){
	std::cout << "WrongAnimal 복사생성자" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {//virtual함수라도 정의할 땐 virtual 안붙이는 것을 확인
	std::cout << "WrongAnimal 소멸자" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal 할당연산자" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal의 소리.릭.ㅣ긱ㄹ긱기릴릴기긱" << std::endl;
}
