/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 02:17:39 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/17 02:47:33 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (materia[i])
            delete materia[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    *this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++)
            materia[i] = other.materia[i];
    }
    return *this;
}

AMateria* MateriaSource::getMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materia[i] && materia[i]->getType() == type)
            return materia[i];
	}
    return NULL;
}

void    MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++)
        if (materia[i] == NULL) {
            materia[i] = m;
            return;
        }
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
    for ( int i = 0; i < 4; i++ )
        if ( materia[i] && materia[i]->getType() == type )
            return materia[i]->clone();
    return NULL;
}
