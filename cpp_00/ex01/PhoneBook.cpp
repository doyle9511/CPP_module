/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:42 by donghwi2          #+#    #+#             */
/*   Updated: 2025/01/25 18:40:26 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIdx(0), contactCnt(0); // 초기화 기법중 -> 초기화 리스트

PhoneBook::~PhoneBook() {} // 관용적, 명시적으로 소멸자도 만들어줌

void	PhoneBook::AddContact(Contact newContact)
{
	contacts[currentIdx] = newContact;
	currentIdx = (currentIdx + 1) % 8;
	if (contactCnt < 8)
		contactCnt++;
}




/*
std::string PhoneBook::TruncateString(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::AddContact(Contact newContact) {
	contacts[currentIdx] = newContact;
	currentIdx = (currentIdx + 1) % 8;
	if (contactCnt < 8)
		contactCnt++;
}

void PhoneBook::DisplayContactDetails(int index) {
	std::cout << "First Name: " << contacts[index].GetFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].GetLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].GetNickName() << std::endl;
	std::cout << "Phone Number: " << contacts[index].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].GetDarkestSecret() << std::endl;
}

void PhoneBook::SearchContact() {
	if (contactCnt == 0) {
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < contactCnt; i++) {
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << TruncateString(contacts[i].GetFirstName()) << "|"
				<< std::setw(10) << TruncateString(contacts[i].GetLastName()) << "|"
				<< std::setw(10) << TruncateString(contacts[i].GetNickName()) << std::endl;
	}

	std::string input;
	std::cout << "Enter index: ";
	std::getline(std::cin, input);

	try {
		int index = std::stoi(input);
		if (index >= 0 && index < contactCnt)
			DisplayContactDetails(index);
		else
			std::cout << "Invalid index" << std::endl;
	} catch (...) {
		std::cout << "Invalid input" << std::endl;
	}
}
*/