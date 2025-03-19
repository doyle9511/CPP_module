/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:19:27 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 16:08:04 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &src) : x(src.x), y(src.y) {}

Point	&Point::operator=(const Point &other){
	(void)other;//상수맴버 재할당 불가하기에 하는 척만
	return (*this);
}

Point::~Point( void ) {}

Fixed	Point::getX() const {
	return (this->x);
}

Fixed	Point::getY() const {
	return (this->y);
}