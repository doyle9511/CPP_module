/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:22:47 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/14 17:38:45 by donghwi2         ###   ########.fr       */
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
		Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
