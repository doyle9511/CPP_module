/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:53:50 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 19:14:38 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		~FragTrap(void);
		FragTrap &operator=(const FragTrap &other);

		void	attack(const std::string &target);//메서드 오버라이딩(재정의)
		void	highFivesGuys(void);//자신만의 고유 메서드
};

#endif