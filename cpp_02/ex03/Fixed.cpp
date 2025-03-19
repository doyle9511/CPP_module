/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:54 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 15:34:07 by donghwi2         ###   ########.fr       */
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

//+
Fixed Fixed::operator+(const Fixed &rhs) const {
	Fixed result;
	result.setRawBits(this->fixedPointVal + rhs.fixedPointVal);
	return result;
}

//-
Fixed Fixed::operator-(const Fixed &rhs) const {
	Fixed result;
	result.setRawBits(this->fixedPointVal - rhs.fixedPointVal);
	return result;
}

//*
Fixed Fixed::operator*(const Fixed &rhs) const {
	Fixed result;

	long long temp = static_cast<long long>(this->fixedPointVal) * static_cast<long long>(rhs.fixedPointVal);
	result.setRawBits(static_cast<int>(temp >> fractionalBits));
	return result;
}

// /
Fixed Fixed::operator/(const Fixed &rhs) const {
	if (rhs.fixedPointVal == 0) {//0 나누가 방어
		std::cerr << "Error: Division by zero" << std::endl;
		return Fixed();
	}
	Fixed result;

	long long temp = static_cast<long long>(this->fixedPointVal) << fractionalBits;
	result.setRawBits(static_cast<int>(temp / rhs.fixedPointVal));
	return result;
}

// 전위 증가
Fixed &Fixed::operator++() {
	++this->fixedPointVal;
	return *this;
}

// 후위 증가
Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	++(*this);
	return temp;
}

// 전위 감소
Fixed &Fixed::operator--() {
	--this->fixedPointVal;
	return *this;
}

// 후위 감소
Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return temp;
}


Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b) ? a : b;
}
