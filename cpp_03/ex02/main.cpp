/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 19:01:26 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	std::cout << "===== ClapTrap 테스트 =====" << std::endl;
	ClapTrap ct("CT-1");
	ct.attack("적");
	ct.takeDamage(5);
	ct.beRepaired(3);
	std::cout << std::endl;
		
	std::cout << "===== ScavTrap 테스트 =====" << std::endl;
	ScavTrap st("ST-1");
	st.attack("적");
	st.takeDamage(30);
	st.beRepaired(15);
	st.guardGate();
	std::cout << std::endl;
		
	std::cout << "===== FragTrap 테스트 =====" << std::endl;
	FragTrap ft("FT-1");
	ft.attack("적");
	ft.takeDamage(40);
	ft.beRepaired(20);
	ft.highFivesGuys();
	std::cout << std::endl;
		
	std::cout << "===== 생성/소멸 순서 테스트 =====" << std::endl;
	{
		std::cout << "FragTrap 생성:" << std::endl;
		FragTrap ft2("FT-2");
		std::cout << "생성 완료, 곧 소멸됩니다..." << std::endl;
	}
	std::cout << "소멸 완료" << std::endl;
	std::cout << std::endl;
		
	std::cout << "===== 파생 클래스 속성 비교 =====" << std::endl;
	ClapTrap ct2("비교용 CT");
	ScavTrap st2("비교용 ST");
	FragTrap ft2("비교용 FT");
		
	std::cout << "ClapTrap 체력: " << ct2.getHitPoint() << ", 에너지: " << ct2.getEnergyPoint() << ", 공격력: " << ct2.getAttackDamage() << std::endl;
	std::cout << "ScavTrap 체력: " << st2.getHitPoint() << ", 에너지: " << st2.getEnergyPoint() << ", 공격력: " << st2.getAttackDamage() << std::endl;
	std::cout << "FragTrap 체력: " << ft2.getHitPoint() << ", 에너지: " << ft2.getEnergyPoint() << ", 공격력: " << ft2.getAttackDamage() << std::endl;
	std::cout << std::endl;
		
	std::cout << "===== 완전 파괴 테스트 =====" << std::endl;
	FragTrap ft3("FT-3");
	std::cout << "현재 체력: " << ft3.getHitPoint() << std::endl;
	ft3.takeDamage(120);  // 체력보다 많은 데미지
	ft3.beRepaired(10);   // 파괴된 후 수리 시도
	ft3.attack("적");	 // 파괴된 후 공격 시도
	ft3.highFivesGuys();  // 파괴된 후 하이파이브 시도
	std::cout << std::endl;
		
	std::cout << "===== 종료 =====" << std::endl;
}
