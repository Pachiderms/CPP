/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:55 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 12:19:49 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <ctime>
#include <stdexcept>

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
                throw std::runtime_error("container is full.");
            _v.insert(_v.end(), first, last);
        }
    
        int shortestSpan()const;
        int longestSpan()const;
};