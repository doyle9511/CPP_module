/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 17:01:52 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {

	Point	a(0.0f, 0.0f);
	Point	b(10.0f, 0.0f);
	Point	c(5.0f, 10.0f);
	
	Point inside(5.0f, 5.0f);		// 내부에 있는 점
	Point outside(20.0f, 20.0f);	// 외부에 있는 점
	Point edge(5.0f, 0.0f);			// 변 위에 있는 점
	Point vertex(0.0f, 0.0f);  		// 꼭지점 위에 있는 점

	std::cout << "점 (5, 5)는 삼각형 내부에 " 
	<< (bsp(a, b, c, inside) ? "있습니다." : "없습니다.") << std::endl;

	std::cout << "점 (20, 20)는 삼각형 내부에 " 
	<< (bsp(a, b, c, outside) ? "있습니다." : "없습니다.") << std::endl;

	std::cout << "점 (5, 0)는 삼각형 내부에 " 
	<< (bsp(a, b, c, edge) ? "있습니다." : "없습니다.") << std::endl;

	std::cout << "점 (0, 0)는 삼각형 내부에 " 
	<< (bsp(a, b, c, vertex) ? "있습니다." : "없습니다.") << std::endl;

	return 0;
	}
