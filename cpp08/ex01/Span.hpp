/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:55 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/10 15:37:38 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <list>
#include <ctime>

class Span
{
    private:
        Span(){};
        std::list<int> _l;
        unsigned int _N;

    public:
        ~Span(){};
        Span(unsigned int N);
        Span(const Span & other);
        Span& operator=(const Span & s);

    public:
        size_t getsize() const;
        int getVal(size_t i)const;

        void addNumber(int n);
    
        int shortestSpan();
        int longestSpan();

        class OverflowException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Container is full!");
                }
        };
};