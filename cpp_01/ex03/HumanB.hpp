/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:19:15 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 03:07:48 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
		Weapon		*type;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &type);
		void	attack();
};

#endif