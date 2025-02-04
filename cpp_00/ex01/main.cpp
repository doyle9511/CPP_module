/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:17:38 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/04 14:26:32 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void){
	PhoneBook	phoneBook;
	std::string	command;

	while (1){
		std::cin >> command;
			phoneBook.CheckCommand(command);
	}
}

//#include <iostream>

// int	main(void)
// {
// 	PhoneBook	PhoneBook;
// 	std::string	command;
// 	std::string tempFN, tempLN, tempNN, tempPN, tempDS;

// 	while (1)
// 	{
// 		std::cout << "Enter Command :";
// 		std::cin >> command;
// 		if (command == "ADD")
// 		{
// 			std::cout << "Enter First Name :";
// 			std::cin >> tempFN;
// 			std::cout << "Enter Last Name :";
// 			std::cin >> tempLN;
// 			std::cout << "Enter Nick Name :";
// 			std::cin >> tempNN;
// 			std::cout << "Enter Phone Number :";
// 			std::cin >> tempPN;
// 			std::cout << "Enter Darcest Secret :";
// 			std::cin >> tempDS;
			
// 		}
// 	}
// 	return (0);
// }