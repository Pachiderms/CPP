/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:45 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/20 11:55:01 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb_fbits = 8;

Fixed::Fixed() : fp_val(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : fp_val(i){
    std::cout << "Int constructor called" << std::endl;
    this->fp_val = i << this->nb_fbits;
}

Fixed::Fixed(const float p_nb) : fp_val(0){
    std::cout << "Float constructor called" << std::endl;
    this->fp_val = roundf(p_nb * (1 << this->nb_fbits));
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
    return this->fp_val;
}

void Fixed::setRawBits(int const raw){
    this->fp_val = raw;
    return ;
}

float Fixed::toFloat()const{
	return ((float)this->fp_val / (float)(1 << this->nb_fbits));
}

int Fixed::toInt()const{
    return (this->fp_val >> this->nb_fbits);
}

std::ostream &operator<<(std::ostream &other, Fixed const &fixed){
    other << fixed.toFloat();
    return other;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
