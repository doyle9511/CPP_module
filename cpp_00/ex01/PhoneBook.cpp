/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:42 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/08 20:04:11 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	: currentIdx(0), contactCnt(0){
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::DisplayDetailContact(int idx){
	if (idx < 0 || idx >= contactCnt){
		std::cout << "wrong index\n";
	}
	else {
		std::cout << "Index: " << idx << std::endl;
		std::cout << "First Name: " << contacts[idx].GetFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[idx].GetLastName() << std::endl;
		std::cout << "Nick Name: " << contacts[idx].GetNickName() << std::endl;
		std::cout << "Phone Number: " << contacts[idx].GetPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[idx].GetDarkestSecret() << std::endl;
	}
}

std::string	PhoneBook::TrimString(std::string str){
	std::string	resultStr;

	resultStr = str.substr(0, 9);
	if (str.length() > 10)
		resultStr += ".";
	return (resultStr);
}

void	PhoneBook::DisplayFullContacts(){
	std::cout << "     index|first name| last name| nick name\n";
	for (int i = 0; i < contactCnt; i++){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << TrimString(contacts[i].GetFirstName()) << "|";
		std::cout << std::setw(10) << TrimString(contacts[i].GetLastName()) << "|";
		std::cout << std::setw(10) << TrimString(contacts[i].GetNickName()) << std::endl;
	}
}

void	PhoneBook::AddContact(Contact newContact){
	contacts[currentIdx] = newContact;
	currentIdx++;
	if (contactCnt < 8)
		contactCnt++;
	if (currentIdx == 8)
		currentIdx = 0;
}

void	PhoneBook::CheckCommand(std::string command){
	std::string	tempFN, tempLN, tempNN, tempPN, tempDS;
	int	selectIdx = 0;

	if (command == "ADD"){
		std::cout << "First Name: ";
		std::getline(std::cin, tempFN);
		std::cout << "Last Name: ";
		std::getline(std::cin, tempLN);
		std::cout << "Nick Name: ";
		std::getline(std::cin, tempNN);
		std::cout << "phone Number: ";
		std::getline(std::cin, tempPN);
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, tempDS);
		
		Contact	newContact(tempFN, tempLN, tempNN, tempPN, tempDS);
		AddContact(newContact);
	}
	else if (command == "SEARCH"){
		if (contactCnt == 0){
			std::cout << "contact not exist\n";
		}
		else {
			DisplayFullContacts();
			std::cout << "select the index :";
			std::cin >> selectIdx;
			DisplayDetailContact(selectIdx);
		}
	}
}
