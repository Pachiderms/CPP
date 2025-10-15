/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:55 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/15 14:52:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <ctime>

class Span
{
    private:
        Span(){};
        std::vector<int> _v;
        unsigned int _N;

    public:
        ~Span(){};
        Span(unsigned int N);
        Span(const Span & other);
        Span& operator=(const Span & other);

    public:
        void addNumber(int n);
        template <typename T>
        void addRange(T first, T last)
        {
            if (_v.size() + std::distance(first, last) > _N)
                throw OverflowException();
            _v.insert(_v.end(), first, last);
        }
    
        int shortestSpan()const;
        int longestSpan()const;

        class OverflowException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Container can't add value(s) because of it's capacity!");
                }
        };
};