/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:58:25 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 18:54:52 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog 기본생성자" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Dog 복사생성자" << std::endl;
}

Dog::~Dog(void) {
	delete this->brain;
	std::cout << "Dog 소멸자" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "Dog 할당연산자" << std::endl;
	if (this != &other) {
		Animal::operator=(other);  // 부모 클래스 할당 연산자 호출 (부모 부분 복사하기)
		delete this->brain; // 기존 brain 제거
		this->brain = new Brain(*(other.brain));
	}
		return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "멍멍 멍멍" << std::endl;
}

std::string	Dog::getIdea(int i) {
	return (this->brain->getIdea(i));
}

void	Dog::setIdea(int i, std::string idea) {
	this->brain->setIdea(i, idea);
}