/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:35:39 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/04 14:42:37 by donghwi2         ###   ########.fr       */
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
		void	GetFullContacts()
};

// class PhoneBook
// {
// 	private:
// 		Contact	contacts[8];
// 		int		currentIdx;
// 		int		contactCnt;
		
// 		std::string TruncateString(std::string str);
// 		void		DisplayContactDetails(int idx);

// 	public:
// 		PhoneBook();
// 		~PhoneBook();
// 		void	AddContact(Contact newContact);
// 		void	SearchContact();
// };

#endif