/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/21 19:26:19 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap defaultTrap;
    std::cout << std::endl;
    
    // 이름 생성자 테스트
    ClapTrap ct1("CT-1");
    ClapTrap ct2("CT-2");
    std::cout << std::endl;
    
    // 복사 생성자 테스트
    ClapTrap ct3(ct1);
    std::cout << std::endl;
    
    // 공격 기능 테스트
    ct1.attack("적");
    ct2.attack("몬스터");
    std::cout << std::endl;
    
    // 데미지 테스트
    ct1.takeDamage(5);
    ct2.takeDamage(15);  // 체력보다 큰 데미지
    std::cout << std::endl;
    
    // 수리 테스트
    ct1.beRepaired(3);
    ct2.beRepaired(5);   // 파괴된 후 수리 시도
    std::cout << std::endl;
    
    // 에너지 고갈 테스트
    for (int i = 0; i < 10; i++) {
        std::cout << "에너지 소모 테스트 #" << i + 1 << ": ";
        ct3.attack("타겟");
    }
    // 에너지가 없을 때 시도
    ct3.attack("타겟");
    ct3.beRepaired(1);
    std::cout << std::endl;
    
    // 상태 확인
    std::cout << "--- 최종 상태 ---" << std::endl;
    std::cout << "CT-1 체력: " << ct1.getHitPoint() << ", 에너지: " << ct1.getEnergyPoint() << std::endl;
    std::cout << "CT-2 체력: " << ct2.getHitPoint() << ", 에너지: " << ct2.getEnergyPoint() << std::endl;
    std::cout << "CT-3 체력: " << ct3.getHitPoint() << ", 에너지: " << ct3.getEnergyPoint() << std::endl;
    std::cout << std::endl;
    
    return 0;
}
