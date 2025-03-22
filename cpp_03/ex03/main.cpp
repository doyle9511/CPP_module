/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 19:35:42 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	std::cout << "===== DiamondTrap 테스트 =====" << std::endl;
	DiamondTrap dt("DT-1");
	dt.attack("적");		  // ScavTrap의 attack 사용
	dt.guardGate();		  // ScavTrap의 고유 능력
	dt.highFivesGuys();	  // FragTrap의 고유 능력
	dt.whoAmI();			 // DiamondTrap의 고유 능력
	std::cout << "DiamondTrap 체력: " << dt.getHitPoint() << ", 에너지: " << dt.getEnergyPoint() << ", 공격력: " << dt.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << "===== 생성/소멸 순서 테스트 =====" << std::endl;
	{
		std::cout << "DiamondTrap 생성 시작:" << std::endl;
		DiamondTrap dt2("DT-2");
		std::cout << "생성 완료, 곧 소멸됩니다..." << std::endl;
	}
	std::cout << "소멸 완료" << std::endl;
	std::cout << std::endl;
		
	std::cout << "===== 복사 생성자 테스트 =====" << std::endl;
	{
		DiamondTrap original("Original");
		DiamondTrap copy(original);
		
		std::cout << "원본: ";
		original.whoAmI();
		std::cout << "복사본: ";
		copy.whoAmI();
	}
	std::cout << std::endl;

	std::cout << "===== 할당 연산자 테스트 =====" << std::endl;
	{
		DiamondTrap dt1("DT-Assignment1");
		DiamondTrap dt2("DT-Assignment2");
		
		std::cout << "할당 전:" << std::endl;
		dt1.whoAmI();
		dt2.whoAmI();
		
		dt1 = dt2;
		
		std::cout << "할당 후:" << std::endl;
		dt1.whoAmI();
		dt2.whoAmI();
	}
	std::cout << std::endl;

	std::cout << "===== 종료 =====" << std::endl;
	return 0;
}