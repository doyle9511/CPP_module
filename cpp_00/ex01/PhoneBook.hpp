/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:39 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/08 20:04:17 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
		int		currentIdx;
		int		contactCnt;
	public:
		PhoneBook();
		~PhoneBook();
		void	CheckCommand(std::string command);
		void	AddContact(Contact newContact);
		void	DisplayFullContacts();
		void	DisplayDetailContact(int idx);
		std::string	TrimString(std::string str);
};

#endif