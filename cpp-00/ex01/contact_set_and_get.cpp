/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_set_and_get.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:48:33 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/05 14:48:38 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	
}

void Contact::set_index(int i) {
		// if statement
		contactIndex = i;
}

int Contact::get_index() {
		return (contactIndex);
}

std::string Contact::get_first_name() {
		return (firstName);
}

void Contact::set_first_name(std::string firstName_i) {
		firstName = firstName_i;
}

void Contact::set_last_name(std::string lasttName_i) {
		lastName = lasttName_i;
}

std::string Contact::get_last_name() {
		return (lastName);
}

void Contact::set_nick_name(std::string nickName_i) {
		nickName = nickName_i;
}

std::string Contact::get_nick_name() {
		return (nickName);
}

void Contact::set_phone_number(std::string phoneNumber_i) {
		phoneNumber = phoneNumber_i;
}

std::string Contact::get_phone_number() {
		return (phoneNumber);
}

void Contact::set_secret(std::string secret_i) {
		darkestSecret = secret_i;
}

std::string Contact::get_secret() {
	return (darkestSecret);
}
