/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:15:45 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 19:25:49 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : 
	// 가상 상속에서는 가장 파생된 클래스(DiamondTrap)가 가상 기본 클래스(ClapTrap)를 직접 초기화
	ClapTrap("unknown_clap_name"), 
	// 중간 부모 클래스들도 초기화
	ScavTrap(), 
	FragTrap() 
{
	// 멤버 변수 초기화 - FragTrap과 ScavTrap에서 원하는 값 가져오기
	_name = "unknown";		   // DiamondTrap의 이름
	_hitPoint = 100;			// FragTrap의 체력
	_energyPoint = 50;		  // ScavTrap의 에너지
	_attackDamage = 30;		  // FragTrap의 공격력
		
	std::cout << "DiamondTrap 기본 생성자가 호출되었습니다." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : 
	// ClapTrap 생성자에 "_clap_name" 접미사를 붙인 이름 전달
	ClapTrap(name + "_clap_name"), 
	ScavTrap(), 
	FragTrap() 
{
	// DiamondTrap의 _name은 원래 이름 그대로 사용
	_name = name;
	// 능력치 초기화
	_hitPoint = 100;			// FragTrap의 체력
	_energyPoint = 50;		  // ScavTrap의 에너지
	_attackDamage = 30;		  // FragTrap의 공격력
		
	std::cout << "DiamondTrap " << _name << " 생성자가 호출되었습니다." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : 
	ClapTrap(other), 
	ScavTrap(other), 
	FragTrap(other) 
{
	// ClapTrap, ScavTrap, FragTrap의 멤버는 각각의 복사 생성자에서 복사됨
	// DiamondTrap의 _name만 별도로 복사
	_name = other._name;
		
	std::cout << "DiamondTrap 복사 생성자가 호출되었습니다." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << _name << " 소멸자가 호출되었습니다." << std::endl;
	// 소멸자 호출 순서: DiamondTrap -> FragTrap -> ScavTrap -> ClapTrap (역순)
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap 할당 연산자가 호출되었습니다." << std::endl;
	if (this != &other) {
		// 부모 클래스의 할당 연산자 호출
		ClapTrap::operator=(other);
		// DiamondTrap만의 멤버 변수 복사
		_name = other._name;
	}
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "나는 DiamondTrap " << _name << "입니다. " << "내 ClapTrap 이름은 " << ClapTrap::_name << "입니다." << std::endl;
	// _name: DiamondTrap의 이름
	// ClapTrap::_name: ClapTrap의 이름 (name_clap_name)
}

// ScavTrap의 attack 함수 사용
void DiamondTrap::attack(const std::string& target) {
	// 명시적으로 ScavTrap의 attack 함수 호출 (모호성 해결)
	ScavTrap::attack(target);
}