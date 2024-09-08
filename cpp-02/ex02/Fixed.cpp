/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:50:42 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/12 19:24:47 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedPointValue( n << _fractionalBits ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPointValue(roundf( n * ( 1 << _fractionalBits ) )) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &other )
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat(void) const {
    return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}

int     Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream & operator<<(std::ostream & output, Fixed const & num) {
    output << num.toFloat();
    return output;
}

bool    Fixed::operator>(const Fixed &other) const {
    return this->getRawBits() > other.getRawBits();
}

bool    Fixed::operator<(const Fixed &other) const {
    return this->getRawBits() < other.getRawBits();
}

bool    Fixed::operator>=(const Fixed &other) const {
    return this->getRawBits() >= other.getRawBits();
}

bool   Fixed::operator<=(const Fixed &other) const {
    return this->getRawBits() <= other.getRawBits();
}

bool  Fixed::operator==(const Fixed &other) const {
    return this->getRawBits() == other.getRawBits();
}

bool    Fixed::operator!=(const Fixed &other) const {
    return this->getRawBits() != other.getRawBits();
}

Fixed   Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed   Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed   Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed   Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed&   Fixed::operator++(void) {
    ++this->_fixedPointValue;
    return *this;
}

Fixed   Fixed::operator++(int) {
    Fixed tmp(*this);
    tmp._fixedPointValue = this->_fixedPointValue++;
    return tmp;
}

Fixed& Fixed::operator--(void) {
    --this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    tmp._fixedPointValue = this->_fixedPointValue--;
    return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}
