/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:34:49 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:43:47 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal 기본생성자" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) { // 원본객체의 type값 초기화 해줘야지
	std::cout << "Animal 복사생성자" << std::endl;
}

Animal::~Animal(void) {//virtual함수라도 정의할 땐 virtual 안붙이는 것을 확인
	std::cout << "Animal 소멸자" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	std::cout << "Animal 할당연산자" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->type);
}

void Animal::makeSound(void) const {
	std::cout << "Animal의 소리" << std::endl;
}
