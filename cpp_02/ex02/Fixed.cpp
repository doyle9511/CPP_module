/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:54 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 15:33:56 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



/******************************************************************************/
Fixed::Fixed() : fixedPointVal(0) {
}

Fixed::Fixed(const int value) {
	this->fixedPointVal = value << fractionalBits;
}

Fixed::Fixed(const float value) {
	this->fixedPointVal = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->fixedPointVal = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
}

/******************************************************************************/

void	Fixed::setRawBits( int const raw ) {
	this->fixedPointVal = raw;
}

int		Fixed::getRawBits( void ) const {
	return (this->fixedPointVal);
}

int		Fixed::toInt(void) const {
	return this->fixedPointVal >> fractionalBits;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(this->fixedPointVal) / (1 << fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}




// ------------------- 비교 연산자 -------------------
bool Fixed::operator>(const Fixed &rhs) const {
    return this->fixedPointVal > rhs.fixedPointVal;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->fixedPointVal < rhs.fixedPointVal;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return this->fixedPointVal >= rhs.fixedPointVal;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return this->fixedPointVal <= rhs.fixedPointVal;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return this->fixedPointVal == rhs.fixedPointVal;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return this->fixedPointVal != rhs.fixedPointVal;
}

// ------------------- 산술 연산자 -------------------
Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed result;
    result.setRawBits(this->fixedPointVal + rhs.fixedPointVal);
    return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    Fixed result;
    result.setRawBits(this->fixedPointVal - rhs.fixedPointVal);
    return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    Fixed result;
    // 곱셈 시 소수점 비트 수를 고려하여 계산
    long long temp = static_cast<long long>(this->fixedPointVal) * static_cast<long long>(rhs.fixedPointVal);
    result.setRawBits(static_cast<int>(temp >> fractionalBits));
    return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    // 0으로 나누는 것을 방지
    if (rhs.fixedPointVal == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
        return Fixed();
    }
    
    Fixed result;
    // 나눗셈 시 소수점 비트 수를 고려하여 계산
    long long temp = static_cast<long long>(this->fixedPointVal) << fractionalBits;
    result.setRawBits(static_cast<int>(temp / rhs.fixedPointVal));
    return result;
}

// ------------------- 증감 연산자 -------------------
// 전위 증가 (++a)
Fixed &Fixed::operator++() {
    ++this->fixedPointVal;
    return *this;
}

// 후위 증가 (a++)
Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

// 전위 감소 (--a)
Fixed &Fixed::operator--() {
    --this->fixedPointVal;
    return *this;
}

// 후위 감소 (a--)
Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}


// ------------------- 정적 멤버 함수 -------------------
// 두 Fixed 객체 중 작은 값 반환 (비상수 버전)
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

// 두 Fixed 객체 중 작은 값 반환 (상수 버전)
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

// 두 Fixed 객체 중 큰 값 반환 (비상수 버전)
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

// 두 Fixed 객체 중 큰 값 반환 (상수 버전)
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}
