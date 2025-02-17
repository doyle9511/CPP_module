/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:33:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 00:40:45 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int		N = 5;
	Zombie	*zombies = zombieHorde(N, "Donghwi");
	
	for (int i = 0; i < N; i++){
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}