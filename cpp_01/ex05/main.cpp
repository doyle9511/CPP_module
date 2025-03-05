/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:33:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/05 15:56:38 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	Harl harl0;

	harl0.complain("DEBUG");
    harl0.complain("INFO");
    harl0.complain("WARNING");
    harl0.complain("ERROR");
    harl0.complain("BAD_COMPLAIN");
	return 0;
}
