/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:56:33 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 03:16:17 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string	name;
	public:
		Zombie( std::string name );
		~Zombie();
		void	announce( void );
};

Zombie*	newZombie( std::string name );
//합 메모리에 Zombie생성 (new 사용)
//함수 밖에서도 사용 가능
//수동으로 delete

void	randomChump( std::string name );
//스텍 메모리에 Zombie생성
//함수 끝나면 자동소멸
//함수 스코프 내에서만 사용 가능

#endif