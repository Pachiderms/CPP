/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:49 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/20 11:52:59 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fp_val;
    static const int nb_fbits;
public:
    Fixed();
    Fixed(const int i);
    Fixed(const float p_nb);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat()const;
    int toInt()const;
};

std::ostream &operator<<(std::ostream &other, Fixed const &fixed);

#endif