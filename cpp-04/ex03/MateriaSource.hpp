/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 02:14:44 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/17 02:46:15 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*       materia[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & other);
	MateriaSource&  operator=(MateriaSource const &other);

	AMateria* getMateria(std::string const & type);
	AMateria* createMateria(std::string const & type);
	void learnMateria(AMateria*);
};

#endif
