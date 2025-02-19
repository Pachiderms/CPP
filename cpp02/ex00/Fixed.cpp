/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:45 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/13 10:48:39 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb_fbits = 8;

Fixed::Fixed() : fp_val(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : fp_val(other.fp_val){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->fp_val = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits()const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fp_val;
}

void Fixed::setRawBits(int const raw){
    this->fp_val = raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
