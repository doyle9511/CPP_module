/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:33:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/18 01:09:42 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

    std::cout << "str address       : " << &str << std::endl;
    std::cout << "stringPTR address : " << stringPTR << std::endl;
    std::cout << "stringREF address : " << &stringREF << std::endl;

    std::cout << std::endl;
\
    std::cout << "str value       : " << str << std::endl;
    std::cout << "stringPTR value : " << *stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;

	return (0);
}