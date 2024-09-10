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


void check_cat_shallow_copy() {
	Cat cat1;
	Cat cat2;

	std::cout << "Cat1 before: " << cat1.get_b_idea(0) << std::endl;
	cat1 = cat2;
	std::cout << "Cat2 before: " << cat2.get_b_idea(0) << std::endl;

	cat1.set_b_idea(0, "Hadiiiiii");
	
	std::cout << "Cat1 after: " << cat1.get_b_idea(0) << std::endl;
	
	std::cout << "Cat2 after: " << cat2.get_b_idea(0) << std::endl;	
}

void check_dog_shallow_copy() {
	Dog Dog1;
	Dog Dog2;

	std::cout << "Dog1 before: " << Dog1.get_b_idea(0) << std::endl;
	Dog1 = Dog2;
	std::cout << "Dog2 before: " << Dog2.get_b_idea(0) << std::endl;

	Dog1.set_b_idea(0, "Hadiiiiii");
	
	std::cout << "Dog1 after: " << Dog1.get_b_idea(0) << std::endl;
	
	std::cout << "Dog2 after: " << Dog2.get_b_idea(0) << std::endl;	
}

void check_dog_shallow_copy2() {
	Dog Dog1;
	Dog Dog2(Dog1);

	std::cout << "Dog1 before: " << Dog1.get_b_idea(0) << std::endl;
	std::cout << "Dog2 before: " << Dog2.get_b_idea(0) << std::endl;

	Dog1.set_b_idea(0, "Hadiiiiii");
	
	std::cout << "Dog1 after: " << Dog1.get_b_idea(0) << std::endl;
	std::cout << "Dog2 after: " << Dog2.get_b_idea(0) << std::endl;	
}

void check_Cat_shallow_copy2() {
	Cat Cat1;
	Cat Cat2(Cat1);

	std::cout << "Cat1 before: " << Cat1.get_b_idea(0) << std::endl;
	std::cout << "Cat2 before: " << Cat2.get_b_idea(0) << std::endl;

	Cat1.set_b_idea(0, "Hadiiiiii");
	
	std::cout << "Cat1 after: " << Cat1.get_b_idea(0) << std::endl;
	std::cout << "Cat2 after: " << Cat2.get_b_idea(0) << std::endl;	
}

void check_Cat_shallow_copy3() {
	Cat basic;
	{
		Cat tmp = basic;
	}

	Cat basic2;
	{
		Cat tmp;

		tmp = basic2;
	}

	Cat *basic3 = new Cat;
	{
		Cat tmp = *basic3;
	}
	delete basic3;
}

void check_Dog_shallow_copy3() {
	Dog basic;
	{
		Dog tmp = basic;
	}

	Dog basic2;
	{
		Dog tmp;

		tmp = basic2;
	}

	Dog *basic3 = new Dog;
	{
		Dog tmp = *basic3;
	}
	delete basic3;
}

void sample_pdf_test() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}
