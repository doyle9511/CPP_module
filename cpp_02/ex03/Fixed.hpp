/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:47 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 15:23:47 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int						fixedPointVal;
	static const int		fractionalBits = 8;
	
public:
	// 생성자 및 소멸자
	Fixed(void);                          // 기본 생성자
	Fixed(const int value);               // 정수를 받는 생성자
	Fixed(const float value);             // 부동소수점을 받는 생성자
	Fixed(const Fixed &src);              // 복사 생성자
	~Fixed(void);                         // 소멸자

	// 할당 연산자
	Fixed &operator=(const Fixed &rhs);   // 복사 할당 연산자

	// 비교 연산자
	bool operator>(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;

	// 산술 연산자
	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	// 증감 연산자
	Fixed &operator++();      // 전위 증가 (++a)
	Fixed operator++(int);    // 후위 증가 (a++)
	Fixed &operator--();      // 전위 감소 (--a)
	Fixed operator--(int);    // 후위 감소 (a--)

	// 값 조회 및 변환 함수
	int     getRawBits(void) const;       // 고정소수점 값의 원시 값을 반환
	void    setRawBits(int const raw);    // 고정소수점 값을 설정
	float   toFloat(void) const;          // 고정소수점 값을 부동소수점으로 변환
	int     toInt(void) const;            // 고정소수점 값을 정수로 변환

	// 정적 멤버 함수
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};
// 출력 스트림 연산자 오버로드
std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif
