/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:27:31 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 16:35:13 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int N):_N(N){}

Span::Span(const Span& other){
    *this = other;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other){
        _N = other._N;
        _v = other._v;
    }
    return *this;
}

void Span::addNumber(int n){
    if (_v.size() >= _N){
        throw std::runtime_error("container is full.");
    }
    else
        _v.push_back(n);
}

int Span::shortestSpan()const{
    if (_v.size() < 2)
        throw std::runtime_error("span cannot perform operations.");
    std::vector<int> sorted = _v;
    std::sort(sorted.begin(), sorted.end());
    int span = sorted[1] - sorted[0];
    for (unsigned int i=1; i < sorted.size(); i++){
        if (sorted[i] - sorted[i - 1] < span)
            span = sorted[i] - sorted[i - 1];
    }
    return span;
}

int Span::longestSpan()const{
    if (_v.size() < 2)
        throw std::runtime_error("span cannot perform operations.");

    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return max - min;
}