/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:50:49 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/12 19:25:50 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
public:
    Fixed(void);
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    bool    operator>(const Fixed &other) const ;
    bool    operator<(const Fixed &other) const ;
    bool    operator>=(const Fixed &other) const ;
    bool    operator<=(const Fixed &other) const ;
    bool    operator==(const Fixed &other) const ;
    bool    operator!=(const Fixed &other) const ;

    Fixed   operator+(const Fixed &other) const ;
    Fixed   operator-(const Fixed &other) const ;
    Fixed   operator*(const Fixed &other) const ;
    Fixed   operator/(const Fixed &other) const ;

    Fixed&  operator++(void);
    Fixed   operator++(int);
    Fixed&  operator--(void);
    Fixed   operator--(int);

    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream & output, Fixed const & num);

#endif