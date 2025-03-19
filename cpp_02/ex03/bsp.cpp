/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:15:29 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/19 16:45:11 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// 외적 계산 : 각 변에 대해 전부 같은 방향에 있는지
static Fixed crossProduct(Point const& p1, Point const& p2, Point const& point) {
	return ((p2.getX() - p1.getX()) * (point.getY() - p1.getY()) - 
			(p2.getY() - p1.getY()) * (point.getX() - p1.getX()));
}

// bsp 알고리즘 : 삼각형 내부에 있는지 여부
bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed cross1 = crossProduct(a, b, point);
	Fixed cross2 = crossProduct(b, c, point);
	Fixed cross3 = crossProduct(c, a, point);
		
	// 모든 외적의 부호가 같으면 점은 삼각형 내부에 있음
	if (cross1 == 0 || cross2 == 0 || cross3 == 0) // 변 위에 점이 있다는 말
		return (false);
		
	// 모든 외적의 부호가 같은지 확인 (모두 양수이거나 모두 음수)
	bool positive = (cross1 > 0 && cross2 > 0 && cross3 > 0);
	bool negative = (cross1 < 0 && cross2 < 0 && cross3 < 0);
		
	return (positive || negative);
}