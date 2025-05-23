/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:49 by pachiderms        #+#    #+#             */
/*   Updated: 2025/05/15 15:01:40 by tzizi            ###   ########.fr       */
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

    bool operator>(Fixed fixed)const;
	bool operator<(Fixed fixed)const;
	bool operator>=(Fixed fixed)const;
	bool operator<=(Fixed fixed)const;
	bool operator==(Fixed fixed)const;
	bool operator!=(Fixed fixed)const;

	float operator+(Fixed fixed)const;
	float operator-(Fixed fixed)const;
	float operator*(Fixed fixed)const;
	float operator/(Fixed fixed)const;

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

    static Fixed& min(Fixed &fixed1, Fixed &fixed2);
    static const Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
    static Fixed& max(Fixed &fixed, Fixed &fixed2);
    static const Fixed& max(const Fixed &fixed, const Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &other, Fixed const &fixed);

#endif