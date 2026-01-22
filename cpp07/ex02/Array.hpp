/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:54:18 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 11:48:50 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int size);
		Array(const Array &a);
        ~Array();

        unsigned int size() const;

		Array &operator=(const Array &a);

		T &operator[](unsigned int index) const;

		class OutOfBoundsException : public std::exception
        {
		    public:
			    virtual const char *what() const throw();
		};
};

template <typename T>
std::ostream& operator<<(std::ostream & o, const Array<T>& a){
	if (a.size() <= 0)
	{
		o << "Empty array!";
		return o;
	}
    for (unsigned int i = 0; i < a.size(); i++){
        o << a[i] << " |";
    }
    return o;
}

#include "Array.tpp"
