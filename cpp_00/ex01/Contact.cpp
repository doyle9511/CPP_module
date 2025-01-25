/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:46 by donghwi2          #+#    #+#             */
/*   Updated: 2025/01/25 19:48:30 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string phoneNumber,
				std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

std::string Contact::GetFirstName(){
	return firstName;
}

std::string Contact::GetLastName(){
	return lastName;
}

std::string Contact::GetNickName(){
	return nickName;
}

std::string Contact::GetPhoneNumber(){
	return phoneNumber;
}

std::string Contact::GetDarkestSecret(){
	return darkestSecret;
}

