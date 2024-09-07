/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_set_and_get.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:47:02 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/05 14:48:11 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	for(int i = 0; i < 8; i++)
		contact[i].set_index(-1);
}

void PhoneBook::set_contactNumber(int num) {
	if (num >= 8)
		contactNumber = 0;
	else
		contactNumber = num;
}

int PhoneBook::get_contactNumber() {
	return (contactNumber);
}

void PhoneBook::setContact(std::string firstName_i, std::string lastName_i, std::string nickName_i,
	std::string phoneNumber_i, std::string darkestSecret_i, int index) {
	contact[index].set_first_name(firstName_i);
	contact[index].set_last_name(lastName_i);
	contact[index].set_nick_name(nickName_i);
	contact[index].set_phone_number(phoneNumber_i);
	contact[index].set_secret(darkestSecret_i);
	contact[index].set_index(index);
	}

void PhoneBook::printContact(int index)
{
	std::cout << "First Name: " << contact[index].get_first_name() << std::endl;
	std::cout << "Last Name: " << contact[index].get_last_name() << std::endl;
	std::cout << "Nick Name: " << contact[index].get_nick_name() << std::endl;
	std::cout << "Phone Number: " << contact[index].get_phone_number() << std::endl;
	std::cout << "Their Darkest Secret: " << contact[index].get_secret() << std::endl << std::endl;
}

void PhoneBook::displayContacts()
{
	for (int i = 0; i < 8 && contact[i].get_index() != -1; i++)
	{
		std::cout << std::setw(10) << std::right << contact[i].get_index() << " | ";
		std::cout << std::setw(10) << std::right << (contact[i].get_first_name().length() > 10 ? contact[i].get_first_name().substr(0, 9) + "." : contact[i].get_first_name()) << " | ";
		std::cout << std::setw(10) << std::right << (contact[i].get_last_name().length() > 10 ? contact[i].get_last_name().substr(0, 9) + "." : contact[i].get_last_name()) << " | ";
		std::cout << std::setw(10) << std::right << (contact[i].get_nick_name().length() > 10 ? contact[i].get_nick_name().substr(0, 9) + "." : contact[i].get_nick_name()) << std::endl;
	}
}