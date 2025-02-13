/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:45 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/13 12:13:25 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb_fbits = 8;

Fixed::Fixed() : fp_val(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : fp_val(i){
}

Fixed::Fixed(const float p_nb) : fp_val(0){

}

Fixed::Fixed(const Fixed &other) : fp_val(other.fp_val){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this->fp_val != fixed.fp_val)
        this->fp_val = fixed.fp_val;
    return *this;
}

int Fixed::getRawBits()const{
    std::cout << "getRawBits member function called" << std::endl;
    return fp_val;
}

int pow(int i, int p)
{
    if (p == 0)
        return 1;
    else if (p == 1)
        return i;
    int base = i;
    while (p > 1)
    {
        i *= base;
        p--;
    }
    return i;
}

void Fixed::setRawBits(int const raw){
    int res;

    std::cout << raw << std::endl;
    
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
