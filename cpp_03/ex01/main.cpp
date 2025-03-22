/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:22 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/22 18:44:05 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    std::cout << "[ClapTrap 테스트]" << std::endl;
    ClapTrap ct("CT-1");
    ct.attack("적");
    ct.takeDamage(5);
    ct.beRepaired(3);
    std::cout << std::endl;
    
    std::cout << "[ScavTrap 테스트]" << std::endl;
    ScavTrap st("ST-1");
    st.attack("적");
    st.takeDamage(30);
    st.beRepaired(15);
    st.guardGate();
    std::cout << std::endl;
    
    std::cout << "[생성/소멸 순서 테스트]" << std::endl;
    {
        std::cout << "ScavTrap 생성:" << std::endl;
        ScavTrap st2("ST-2");
        std::cout << "생성 완료, 곧 소멸됩니다..." << std::endl;
    }
    std::cout << "소멸 완료" << std::endl;
    std::cout << std::endl;
    
    std::cout << "[에너지 소진 테스트]" << std::endl;
    ScavTrap st3("ST-3");
    std::cout << "에너지 포인트: " << st3.getEnergyPoint() << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << i+1 << "번째 공격: ";
        st3.attack("타겟");
    }
    std::cout << "남은 에너지 포인트: " << st3.getEnergyPoint() << std::endl;
    std::cout << std::endl;
    
    std::cout << "[완전 파괴 테스트]" << std::endl;
    std::cout << "현재 체력: " << st3.getHitPoint() << std::endl;
    st3.takeDamage(120);  // 체력보다 많은 데미지
    st3.beRepaired(10);   // 파괴된 후 수리 시도
    st3.attack("적");     // 파괴된 후 공격 시도
    st3.guardGate();      // 파괴된 후 Gate keeper 모드 시도
    std::cout << std::endl;
    
    std::cout << "[종료]" << std::endl;
    return 0;
	return 0;
}
