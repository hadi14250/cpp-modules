/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:45:27 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test_wrong_Animals() {
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the WrongAnimal sound!
	meta->makeSound();
	delete meta;
	delete i;
}

void test_Animal() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}

void array_of_mixed_Animals() {
	Animal *Animals[] = {
		new Dog(),
		new Cat(),
		new Dog(),
		new Cat(),
		new Dog(),
		new Cat(),
		new Dog(),
		new Cat()
	};
	
	for (int i = 0; i < 8; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 8; i++)
		delete Animals[i];
}

void array_of_dogs() {
	Animal *Animals[] = {
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog()
	};
	
	for (int i = 0; i < 8; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 8; i++)
		delete Animals[i];
}

void array_of_cats() {
	Animal *Animals[] = {
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat()
	};
	
	for (int i = 0; i < 8; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 8; i++)
		delete Animals[i];
}

void array_of_wrong_cats() {
	WrongAnimal *Animals[] = {
		new WrongCat(),
		new WrongCat(),
		new WrongCat(),
		new WrongCat(),
		new WrongCat(),
		new WrongCat(),
		new WrongCat(),
		new WrongCat()
	};
	
	for (int i = 0; i < 8; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 8; i++)
		delete Animals[i];
}

void array_of_wrong_Animals() {
	WrongAnimal *Animals[] = {
		new WrongCat(),
		new WrongAnimal(),
		new WrongCat(),
		new WrongAnimal(),
		new WrongCat(),
		new WrongAnimal(),
		new WrongCat(),
		new WrongAnimal()
	};
	
	for (int i = 0; i < 8; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 8; i++)
		delete Animals[i];
}
