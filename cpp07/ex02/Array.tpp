/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:26:20 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 11:50:24 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Array.hpp"

template<typename T>
Array<T>::Array(): _array(NULL), _size(0){}

template<typename T>
Array<T>::~Array() {if (this->_size > 0){delete [] this->_array;}}

template<typename T>
Array<T>::Array(unsigned int size): _size(size){this->_array = new T[this->_size];}

template<typename T>
Array<T>::Array(const Array &a): _size(a.size()){this->_array = NULL; *this = a;}

template<typename T>
unsigned int Array<T>::size() const{ return this->_size; }

template<typename T>
Array<T>& Array<T>::operator=(const Array &a){
	if (this->_size > 0)
		delete [] this->_array;
	if (a.size() != 0){
		this->_size = a.size();
	if (this->_size > 0)
		this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = a._array[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) const{
	if (index >= this->_size || !this->_array){
		std::cout << "index: " << index << ": ";
		throw OutOfBoundsException();
	}	
	return this->_array[index];
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw(){
    return ("Error: Index Out Of Bounds.");
}