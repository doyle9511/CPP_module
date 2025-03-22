/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:00:26 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 17:50:01 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************** 오소독스 ******************************** */

ClapTrap::ClapTrap() : _name("<unknown>"), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << "<unknown> ClapTrap 소환됨! (기본생성자 호출)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << name << " ClapTrap 소환됨! (string 생성자 호출)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source) {
	std::cout << "새로운 ClapTrap 복사됨! (복사연산자 호출)" << std::endl;
	*this = source;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap 내용만 복사! (할당연산자 호출)";
	if (this != &other) {
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " ClapTrap 소멸 ! (소멸자 호출)" << std::endl;
}

/***************************** 맴버함수 ***************************** */

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoint == 0) {
		std::cout << _name << "의 에너지가 부족하여 공격 불가!" << std::endl;
		return ;
	}
	if (_hitPoint == 0) {
		std::cout << _name << "은 이미 사망하여 공격 불가!" << std::endl;
		return ;
	}
	_energyPoint--;
	std::cout << _name << "이 " << target << "을 공격하여 " << _attackDamage << "만큼의 피해를 입힘!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint == 0) {
		std::cout << _name << "은 이미 사망한 상태!" << std::endl;
		return ;
	}
	if (amount >= _hitPoint) {
		_hitPoint = 0;
		std::cout << "ClapTrap " << _name << "이(가) " << amount << " 만큼의 피해를 입어 사망!" << std::endl;
	} else {
		_hitPoint -= amount;
		std::cout << "ClapTrap " << _name << "이(가) " << amount << " 만큼의 데미지를 입었습니다! (남은 체력: " << _hitPoint << ")" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoint == 0) {
		std::cout << _name << "이 에너지가 부족하여 수리 불가!" << std::endl;
		return ;
	}
	if (_hitPoint == 0) {
		std::cout << _name << "이 이미 사망하여 수리 불가!" << std::endl;
		return ;
	}
	_energyPoint--;
	_hitPoint += amount;
	std::cout << _name << "의 체력이" << amount << "만큼 회복됨! (남은 체력 :" << _hitPoint << ")" << std::endl;
}

std::string ClapTrap::getName(void) const {
    return _name;
}

unsigned int ClapTrap::getHitPoint(void) const {
    return _hitPoint;
}

unsigned int ClapTrap::getEnergyPoint(void) const {
    return _energyPoint;
}

unsigned int ClapTrap::getAttackDamage(void) const {
    return _attackDamage;
}