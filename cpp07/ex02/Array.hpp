/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:54:18 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/15 18:27:15 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
		T				*_array;
		unsigned int	_size;

	public:
		Array(): _size(0){this->_array = new T[this->_size];}

		Array(unsigned int size): _size(size){this->_array = new T[this->_size];}

		Array(const Array &a): _size(a.size()){this->_array = NULL; *this = a;}

        ~Array(){if (this->_array != NULL){delete [] this->_array;}}

        unsigned int size() const{ return this->_size; }

		Array &operator=(const Array &a){
			if (this->_array)
				delete [] this->_array;
			if (a.size() != 0){
				this->_size = a.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = a._array[i];
			}
			return *this;
		}

		T &operator[](unsigned int index)const{
			if (index >= this->_size || !this->_array){
				std::cout << "index: " << index << ": ";
				throw OutOfBoundsException();
			}
			return this->_array[index];
		}

		class OutOfBoundsException : public std::exception
        {
		    public:
			    virtual const char *what() const throw(){
                    return ("Error: Index Out Of Bounds.");
                }
		};
};

template <typename T>
std::ostream& operator<<(std::ostream & o, const Array<T>& a){
    for (unsigned int i = 0; i < a.size(); i++){
        o << a[i] << " |";
    }
    o << std::endl;
    return o;
}
