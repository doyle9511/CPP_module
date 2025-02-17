/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 01:19:04 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 02:28:12 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : name(name), type(type){}

HumanA::~HumanA(){}

void	HumanA::attack(){
	std::cout << this->name << " attacks with " << this->type.getType() << std::endl;
}