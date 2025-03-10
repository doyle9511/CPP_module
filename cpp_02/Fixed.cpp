/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:54 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/10 19:07:03 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	setRawBits( int const raw ) {
	
}

int	Fixed::getRawBits( void ) const {
	
}


/*

// 기본 생성자
Fixed::Fixed(void) : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// 복사 생성자
Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

// 복사 할당 연산자 오버로드
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_fixedPointValue = rhs.getRawBits();
    }
    return *this;
}

// 소멸자
Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

// 고정소수점 값의 원시 값을 반환하는 멤버 함수
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

// 고정소수점 값을 설정하는 멤버 함수
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}