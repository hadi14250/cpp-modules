/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:26:19 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/12 18:48:48 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fpValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fpValue(n << _Bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fpValue(roundf( n * ( 1 << _Bits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &other )
        this->_fpValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_fpValue;
}

void    Fixed::setRawBits(int const raw) {
    this->_fpValue = raw;
}

float   Fixed::toFloat(void) const {
    return static_cast<float>(this->getRawBits()) / (1 << _Bits);
}

int     Fixed::toInt(void) const {
    return this->_fpValue >> _Bits;
}

std::ostream & operator<<(std::ostream & output, Fixed const & num) {
    output << num.toFloat();
    return output;
}
