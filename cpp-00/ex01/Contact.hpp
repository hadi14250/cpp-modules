/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 23:24:46 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/05 02:22:44 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int			contactIndex;
public:
	Contact();
	void set_index(int i);
	int get_index();
	void set_first_name(std::string firstName_i);
	std::string get_first_name();
	void set_last_name(std::string lasttName_i);
	std::string get_last_name();
	void set_nick_name(std::string nickName_i);
	std::string get_nick_name();
	void set_phone_number(std::string phoneNumber_i);
	std::string get_phone_number();
	void set_secret(std::string secret_i);
	std::string get_secret();
};

#endif