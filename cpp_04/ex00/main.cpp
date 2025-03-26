/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:32:16 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/25 18:54:04 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* AA = new Animal();
	Animal* DD = new Dog();
	Animal* CC = new Cat();

	std::cout << DD->getType() << " " << std::endl;
	std::cout << CC->getType() << " " << std::endl;
	DD->makeSound(); //will output the cat sound!
	CC->makeSound();
	AA->makeSound();

	delete AA;
	delete DD;
	delete CC;

	WrongAnimal* wrongMeta = new WrongAnimal();
	WrongAnimal* wrongCat = new WrongCat();

	std::cout << "wrongCat 타입: " << wrongCat->getType() << std::endl;

	wrongCat->makeSound(); // "쿠웨에ㅔ게게ㅔ에ㅔㅔ에엑ㄱ"이 출력되면 안됨
	wrongMeta->makeSound(); // WrongAnimal 소리 ".릭.ㅣ긱ㄹ긱기릴릴기긱" 출력됨

	delete wrongMeta;
	delete wrongCat;

	return 0;
}