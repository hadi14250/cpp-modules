/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:54:54 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/05 14:49:29 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

bool is_space(int c) {
  return std::isspace(c);
}

int	checkIfValid(std::string input)
{
	if (input.empty() || std::all_of(input.begin(), input.end(), is_space)) {
    std::cout << "contact info can't be empty or contains only whitespace characters" << std::endl;
    	return 1;
	}
	return (0);
}

void takeContactInput(PhoneBook &book)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "enter first name: ";
	std::getline(std::cin, first_name);
	if (checkIfValid(first_name)){
		return ;
	}
	
	std::cout << "enter last name: ";
	std::getline(std::cin, last_name);
	if (checkIfValid(last_name)){
		return ;
	}
	
	std::cout << "enter nick name: ";
	std::getline(std::cin, nick_name);
	if (checkIfValid(nick_name)){
		return ;
	}
	
	std::cout << "enter phone number: ";
	std::getline(std::cin, phone_number);
	if (checkIfValid(phone_number)){
		return ;
	}
	
	std::cout << "enter their darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (checkIfValid(darkest_secret)){
		return ;
	}
	book.set_contactNumber(book.get_contactNumber() + 1);
	book.setContact(first_name, last_name, nick_name, phone_number, darkest_secret, book.get_contactNumber());
}

int main(void)
{
	std::string input;
	PhoneBook 	book;
	std::string search_input;

	book.set_contactNumber(-1);
	input = "42";
	std::cout << "Welcome to this old phonebook, you can use the following 3 commands" << std::endl;
	while (input != "EXIT" && !(std::cin.eof()))
	{
		if (input == "ADD")
			takeContactInput(book);
		else if (input == "SEARCH")
		{
			book.displayContacts();
			if (book.get_contactNumber() >= 0)
			{
				std::cout << "Enter a contact index to see more info about a contact" << std::endl;
				std::getline(std::cin, search_input);
				if (std::cin.eof())
					break ;
				int search_index = std::stoi(search_input);
				if (search_index < 0 || search_index >= 8)
					std::cout << "Invalid index!!" << std::endl;
				else
					book.printContact(std::stoi(search_input));
			}
			else
				std::cout << "nothing to display, Phonebook is empty" << std::endl;
		}
		std::cout << "[ADD] [SEARCH] [EXIT]" << std::endl;
		std::getline(std::cin, input);
	}
}