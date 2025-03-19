/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:54 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 15:34:25 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



/******************************************************************************/
Fixed::Fixed() : fixedPointVal(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPointVal = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/******************************************************************************/

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointVal = value << fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointVal = roundf(value * (1 << fractionalBits));
}

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

std::ostream& operator<<(std::ostream& os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}
