/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:53:48 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 18:59:52 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// 기본 생성자
FragTrap::FragTrap(void) : ClapTrap() {
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap 기본 생성자 호출" << std::endl;
}

// 이름을 받는 생성자
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " 생성자 호출" << std::endl;
}

// 복사 생성자
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap 복사 생성자 호출" << std::endl;
}

// 소멸자
FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << _name << " 소멸자 호출" << std::endl;
}

// 할당 연산자 오버로딩
FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap 할당 연산자 호출" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// 오버라이딩된 공격 함수
void FragTrap::attack(const std::string& target) {
    if (_energyPoint == 0) {
        std::cout << "FragTrap " << _name << ": 에너지 부족으로 공격불가!" << std::endl;
        return;
    }
    
    if (_hitPoint == 0) {
        std::cout << "FragTrap " << _name << ": 체력 부족으로 공격불가!" << std::endl;
        return;
    }
    
    _energyPoint--;
    std::cout << "FragTrap " << _name << ": " << target << "을 공격하여 " << _attackDamage << " 데미지를 입힘!" << std::endl;
}

// FragTrap 고유 능력
void FragTrap::highFivesGuys(void) {
    if (_hitPoint == 0) {
        std::cout << "FragTrap " << _name << ": 사망하어 하이파이브 불가!" << std::endl;
        return;
    }
    
    std::cout << "FragTrap " << _name << ": 하이파이브!" << std::endl;
}