/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:37:57 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 18:57:50 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain 기본생성자 호출" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "빈 칸";
	}
}

Brain::Brain(const Brain &source) {
	std::cout << "Brain 복사생성자 호출" << std::endl;
	*this = source;
}

Brain::~Brain() {
	std::cout << "Brain 할당연산자 호출" << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << "Brain 할당연산자 호출" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int i) {
	if (0 <= i && i < 100)
		return (this->ideas[i]);
	std::cout << "잘못된 인덱스" << std::endl;
	return ("xxx");
}

void	Brain::setIdea(int i, std::string idea) {
	if (0 <= i && i < 100)
		this->ideas[i] = idea;
	std::cout << "잘못된 인덱스" << std::endl;
}