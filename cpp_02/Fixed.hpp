/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:47 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/10 19:17:49 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
	private:
		
	public:
		Fixed();
		Fixed(const )
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};





















// class Fixed {
// 	private:
// 		int                 _fixedPointValue;
// 		static const int    _fractionalBits = 8;
	
// 	public:
// 		Fixed(void);                          // 기본 생성자
// 		Fixed(const Fixed& src);              // 복사 생성자
// 		Fixed& operator=(const Fixed& rhs);   // 복사 할당 연산자 오버로드
// 		~Fixed(void);                         // 소멸자
	
// 		int     getRawBits(void) const;       // 고정소수점 값의 원시 값을 반환
// 		void    setRawBits(int const raw);    // 고정소수점 값을 설정
// 	};
	
// 	#endif


