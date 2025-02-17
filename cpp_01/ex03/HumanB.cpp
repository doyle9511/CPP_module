/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:19:12 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 03:15:21 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->type = NULL;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon){
	this->type = &weapon;
}

void	HumanB::attack(){
	std::cout << this->name << " attacks with " << this->type->getType() << std::endl;
}
