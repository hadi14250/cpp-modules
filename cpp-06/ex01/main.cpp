/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 06:32:39 by hakaddou          #+#    #+#             */
/*   Updated: 2023/11/28 06:33:55 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data test;

	test.structContent = "this contnt is the value in structcontent in the struct Data";
	uintptr_t serializedtest = Serializer::serialize(&test);
	std::cout << "value of uintptr_t: " << serializedtest << std::endl;

	Data *test2 = Serializer::deserialize(serializedtest);
	

	std::cout << "Original content: " << test.structContent << std::endl;
	std::cout << "Deserialized content: " << test2->structContent << std::endl;
}
