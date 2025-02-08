/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:46 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/08 20:04:27 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::Contact(std::string tempFN, std::string tempLN, std::string tempNN, std::string tempPN, std::string tempDS)
	: firstName(tempFN), lastName(tempLN), nickName(tempNN), phoneNumber(tempPN), darkestSecret(tempDS) {
}

Contact::~Contact(){
}

std::string	Contact::GetFirstName(){
	return firstName;
}

std::string	Contact::GetLastName(){
	return lastName;
}

std::string	Contact::GetNickName(){
	return nickName;
}

std::string	Contact::GetPhoneNumber(){
	return phoneNumber;
}

std::string	Contact::GetDarkestSecret(){
	return darkestSecret;
}
