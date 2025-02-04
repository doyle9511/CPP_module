/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:49 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/04 14:41:16 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		Contact();
		Contact(std::string tempFN, std::string tempLN);
		~Contact();
		std::string	Contact::GetFirstName();
		std::string	Contact::GetLastName();
};


// class Contact{
// 	private:
// 		std::string firstName;
// 		std::string lastName;
// 		std::string nickName;
// 		std::string phoneNumber;
// 		std::string darkestSecret;
	
// 	public:
// 		Contact();
// 		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
// 		~Contact();
// 		std::string GetFirstName();
// 		std::string GetLastName();
// 		std::string GetNickName();
// 		std::string GetPhoneNumber();
// 		std::string GetDarkestSecret();
// };

#endif