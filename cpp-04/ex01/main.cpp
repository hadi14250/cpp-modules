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
#include "Brain.hpp"

// ex00
void test_wrong_Animals();
void test_Animal();
void array_of_mixed_Animals();
void array_of_dogs();
void array_of_cats();
void array_of_wrong_cats();
void array_of_wrong_Animals();

// ex01
void sample_pdf_test();
void check_Cat_shallow_copy3();
void check_Dog_shallow_copy3();
void check_dog_shallow_copy2();
void check_Cat_shallow_copy2();
void check_dog_shallow_copy();
void check_cat_shallow_copy();

int main()
{
	check_Cat_shallow_copy3();
	
	check_Dog_shallow_copy3();
	
	check_dog_shallow_copy2();

	check_Cat_shallow_copy2();

	check_dog_shallow_copy();

	check_cat_shallow_copy();

	test_wrong_Animals();
	
	test_Animal();
	
	array_of_mixed_Animals();
	
	array_of_dogs();
	
	array_of_cats();
	
	array_of_wrong_cats();
	
	array_of_wrong_Animals();
	
	check_cat_shallow_copy();

	array_of_mixed_Animals();

	sample_pdf_test();
}
