/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:25 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 18:55:53 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat 기본생성자" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Cat 복사생성자" << std::endl;
}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat 소멸자" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "Cat 할당연산자" << std::endl;
	if (this != &other) {
		Animal::operator=(other);  // 부모 클래스 할당 연산자 호출 (부모 부분 복사하기)
		delete this->brain; // 기존 brain 제거
		this->brain = new Brain(*(other.brain));
	}
		return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "야옹 야옹" << std::endl;
}

std::string	Cat::getIdea(int i) {
	return (this->brain->getIdea(i));
}

void	Cat::setIdea(int i, std::string idea) {
	this->brain->setIdea(i, idea);
}