/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:32:16 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/26 18:56:44 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "===== 기본 테스트 =====" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;
    std::cout << "j의 타입: " << j->getType() << std::endl;
    std::cout << "i의 타입: " << i->getType() << std::endl;
    
    i->makeSound(); // Cat 소리
    j->makeSound(); // Dog 소리
    
    std::cout << std::endl;
    std::cout << "메모리 해제:" << std::endl;
    delete j; // Dog 객체 및 Brain 해제
    delete i; // Cat 객체 및 Brain 해제
    
    std::cout << "\n===== 깊은 복사 테스트 =====" << std::endl;
    std::cout << "원본 Dog 생성 및 아이디어 설정:" << std::endl;
    Dog* dog1 = new Dog();
    dog1->setIdea(0, "맛있는 뼈다귀를 먹고 싶다!");
    dog1->setIdea(1, "공원에서 산책하고 싶다!");
    
    std::cout << std::endl;
    std::cout << "dog1의 아이디어[0]: " << dog1->getIdea(0) << std::endl;
    std::cout << "dog1의 아이디어[1]: " << dog1->getIdea(1) << std::endl;
    
    std::cout << std::endl;
    std::cout << "복사 생성자로 새 Dog 생성:" << std::endl;
    Dog* dog2 = new Dog(*dog1); // 복사 생성자 사용
    
    std::cout << std::endl;
    std::cout << "원본 Dog 삭제 후 복사본의 아이디어 확인:" << std::endl;
    delete dog1;
    
    std::cout << "dog2의 아이디어[0]: " << dog2->getIdea(0) << std::endl;
    std::cout << "dog2의 아이디어[1]: " << dog2->getIdea(1) << std::endl;
    
    std::cout << std::endl;
    std::cout << "dog2의 아이디어 변경:" << std::endl;
    dog2->setIdea(0, "새로운 아이디어!");
    std::cout << "dog2의 아이디어[0]: " << dog2->getIdea(0) << std::endl;
    
    delete dog2;
    
    std::cout << "\n===== 할당 연산자 테스트 =====" << std::endl;
    Cat cat1;
    cat1.setIdea(0, "생선이 먹고 싶다!");
    
    std::cout << std::endl;
    std::cout << "cat1의 아이디어[0]: " << cat1.getIdea(0) << std::endl;
    
    std::cout << std::endl;
    std::cout << "새 Cat 생성 및 할당:" << std::endl;
    Cat cat2;
    cat2 = cat1; // 할당 연산자 사용
    
    std::cout << std::endl;
    std::cout << "cat2의 아이디어[0]: " << cat2.getIdea(0) << std::endl;
    
    std::cout << std::endl;
    std::cout << "cat1의 아이디어 변경 후 cat2 확인:" << std::endl;
    cat1.setIdea(0, "창밖의 새를 보고 싶다!");
    
    std::cout << "cat1의 아이디어[0]: " << cat1.getIdea(0) << std::endl;
    std::cout << "cat2의 아이디어[0]: " << cat2.getIdea(0) << std::endl;
    
    std::cout << "\n===== 동물 배열 테스트 =====" << std::endl;
    const int arraySize = 4;
    Animal* animals[arraySize];
    
    std::cout << "동물 배열 생성:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        if (i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << animals[i]->getType() << " 생성 완료" << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "동물 배열 소리 테스트:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }
    
    std::cout << std::endl;
    std::cout << "동물 배열 메모리 해제:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }
    
    return 0;
}