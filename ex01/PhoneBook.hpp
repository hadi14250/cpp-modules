/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:50:27 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/05 14:44:29 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
#include <cctype>

class PhoneBook {
private:
	Contact contact[8];
	int		contactNumber;
public:
	PhoneBook();
	void setContact(std::string firstName_i, std::string lastName_i, std::string nickName_i,
		std::string phoneNumber_i, std::string darkestSecret_i, int index);
	void printContact(int index);
	void displayContacts();
	void set_contactNumber(int num);
	int get_contactNumber();
};

#endif