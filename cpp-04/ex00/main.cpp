/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:03:54 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/15 21:59:39 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test_wrong_Animals();
void test_Animal();
void array_of_mixed_Animals();
void array_of_dogs();
void array_of_cats();
void array_of_wrong_cats();
void array_of_wrong_Animals();

int main()
{
	test_wrong_Animals();
	test_Animal();
	array_of_mixed_Animals();
	array_of_dogs();
	array_of_cats();
	array_of_wrong_cats();
	array_of_wrong_Animals();

	// Animal *A = new Cat;
	// A->makeSound();
}
