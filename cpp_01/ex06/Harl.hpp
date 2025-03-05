/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:14:13 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/05 15:47:54 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	typedef void	(Harl::*FunctionPointer)(void);//맴버함수 포인터타입 정의
	
	//레벨 및 함수포인터 매핑할 데이터
	FunctionPointer funcs[4];
	std::string		levels[4];

public:
	Harl();
	~Harl();
	void	complain( std::string level );
};

#endif