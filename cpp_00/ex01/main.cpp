/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:17:38 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/08 20:03:55 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void){
	PhoneBook	phoneBook;
	std::string	command;

	while (1){
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else
			phoneBook.CheckCommand(command);
	}
	return (0);
}
