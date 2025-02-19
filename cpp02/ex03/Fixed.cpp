/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pachiderms <pachiderms@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:45 by pachiderms        #+#    #+#             */
/*   Updated: 2025/02/19 15:18:14 by pachiderms       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb_fbits = 8;

Fixed::Fixed() : fp_val(0){
}

Fixed::Fixed(const int i) : fp_val(i){
    this->fp_val = i << this->nb_fbits;
}

Fixed::Fixed(const float p_nb) : fp_val(0){
    this->fp_val = roundf(p_nb * (1 << this->nb_fbits));
}

Fixed::Fixed(const Fixed &other) : fp_val(other.fp_val){
}

Fixed& Fixed::operator=(const Fixed& fixed){
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

bool Fixed::operator>(Fixed fixed) const{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(Fixed fixed) const{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(Fixed fixed) const{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(Fixed fixed) const{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed) const{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(Fixed fixed) const{
	return (this->toFloat() != fixed.toFloat());
}

float Fixed::operator+(Fixed fixed) const{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(Fixed fixed) const{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(Fixed fixed) const{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(Fixed fixed) const{
	return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++(){
	this->fp_val++;
	return *this;
}

Fixed Fixed::operator--(){
	this->fp_val--;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed previous = *this;

	++this->fp_val;
	return previous;
}

Fixed Fixed::operator--(int){
	Fixed previous = *this;

    --this->fp_val;
	return previous;
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2){
    if (fixed1.operator<(fixed2))
        return fixed1;
    return fixed2;
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2){
    if (fixed1.operator>(fixed2))
        return fixed1;
    return fixed2;
}

const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2){
    if (fixed1.operator>(fixed2))
        return fixed1;
    return fixed2;
}

Fixed::~Fixed(){
}
