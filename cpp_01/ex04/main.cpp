/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:33:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/04 12:03:13 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av){

	if (ac != 4)
	{
		std::cout << "argument count uncorrect" << std::endl;
		return (1);
	}	
	Replace replace1(av[1], av[2], av[3]);//선언 및 생성자초기화

	if (replace1.checkInput() == -1)
		return (1);
	
	replace1.processRun();

	return 0;
}
