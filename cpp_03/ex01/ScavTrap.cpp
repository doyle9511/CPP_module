/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:00:26 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 18:41:14 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap 기본 생성자 호출" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) { // 대입하려면 부모 매개변수자리에 대입
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " 생성자 호출" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) { // 복사생송자도 그냥 클래스 넣으면 복사되는듯
	std::cout << "ScavTrap 복사 생성자 호출" << std::endl;
}

ScavTrap::~ScavTrap(void) {			// 소멸자에는 부모 태그 안해도 됨
	std::cout << "ScavTrap " << _name << " 소멸자 호출" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) { // 이건 내용이 부모에 맞춰서 바꿔야함
	std::cout << "ScavTrap 할당 연산자 호출" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoint == 0) {
		std::cout << "ScavTrap_" << _name << ": 에너지가 부족하여 공격불가" << std::endl;
		return;
	}
	if (_hitPoint == 0) {
		std::cout << "ScavTrap_" << _name << ": 사망하여 공격불가" << std::endl;
		return;
	}
	_energyPoint--;
	std::cout << "ScavTrap_" << _name << ": " << target << "을 공격하여 " << _attackDamage << " 포인트 데미지를 입힘!" << std::endl;
}

void ScavTrap::guardGate(void) {
	if (_hitPoint == 0) {
		std::cout << "ScavTrap_" << _name << ": 사망하어 Gate keeper 모드 불가!" << std::endl;
		return;
	}
	std::cout << "ScavTrap_" << _name << ": Gate keeper 모드!" << std::endl;
}