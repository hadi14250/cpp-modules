/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:11:22 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/12 18:28:07 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fPValue;
    static const int    _Bits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif  // FIXED_HPP