/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:34:26 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 00:49:48 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ){
	Zombie* Zombies = new Zombie[N];
	for(int i = 0; i < N; i++){
		Zombies[i].SetName(name);
	}
	return (Zombies);
}