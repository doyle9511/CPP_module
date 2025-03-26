/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:25 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:31:56 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)/*:Animal(void)*/{//추가변수 없으면 부모클래스 호출 불필요(명시적으로 추가는 가능)
	this->type = "Dog";
	std::cout << "Dog 기본생성자" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog 복사생성자" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog 소멸자" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "Dog 할당연산자" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "멍멍 멍멍" << std::endl;
}
