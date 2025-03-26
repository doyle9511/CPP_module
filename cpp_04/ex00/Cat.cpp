/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:25 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:26:03 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)/*:Animal(void)*/{//추가변수 없으면 부모클래스 호출 불필요(명시적으로 추가는 가능)
	this->type = "Cat";
	std::cout << "Cat 기본생성자" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat 복사생성자" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat 소멸자" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "Cat 할당연산자" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "야옹 야옹" << std::endl;
}
