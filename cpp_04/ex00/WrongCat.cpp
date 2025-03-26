/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:25 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:26:03 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)/*:Animal(void)*/{//추가변수 없으면 부모클래스 호출 불필요(명시적으로 추가는 가능)
	this->type = "WrongCat";
	std::cout << "WrongCat 기본생성자" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
	std::cout << "WrongCat 복사생성자" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat 소멸자" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat 할당연산자" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "쿠웨에ㅔ게게ㅔ에ㅔㅔ에엑ㄱ" << std::endl;
}
