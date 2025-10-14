/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:27:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 14:55:29 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int N):_N(N){}

Span::Span(const Span& other):_N(other._N){
    if (!this->_l.empty())
        this->_l.clear();
    this->_l.resize(other._N);
    std::list<int>::const_iterator it;
    it = other._l.begin();
    for (it = other._l.begin(); it != other._l.end(); it++){
        this->_l.push_back(*it);
    }
}

Span& Span::operator=(const Span& other)
{
    if (this != &other){
        this->_N = other._N;
        if (!this->_l.empty())
            this->_l.clear();
        this->_l.resize(other._N);
        std::list<int>::const_iterator it;
        for (it = other._l.begin(); it != other._l.end(); it++){
            this->_l.push_back(*it);
        }
    }

    return *this;
}

void Span::addNumber(int n){
    if (_l.size() >= _N){
        throw OverflowException();
    }
    else
        _l.push_back(n);
}

size_t Span::getsize()const{
    return this->_l.size();
}

int Span::getVal(size_t i)const{
    size_t j = 0;
    std::list<int>::const_iterator it;
    it = this->_l.begin();
    for (it = this->_l.begin(); it != this->_l.end(); it++){
        j++;
        if (j == i)
            return *it;
    }
    return -1;
}

int Span::shortestSpan(){
    std::list<int> l;
    std::list<int>::const_iterator it;
    it = _l.begin();
    for (it = _l.begin(); it != _l.end(); it++){
        l.push_back(*it);
    }
    l.unique();
    l.sort();
    
    int first = l.front();
    l.pop_front();
    int sec = l.front();

    return sec - first;
}

int Span::longestSpan(){
    std::list<int> l;
    std::list<int>::const_iterator it;
    it = _l.begin();
    for (it = _l.begin(); it != _l.end(); it++){
        l.push_back(*it);
    }
    l.unique();
    l.sort();

    //for(std::list<int>::const_iterator i = l.begin();i !=l.end();i++) std::cout << *i << std::endl;
    
    const int first = l.front();
    const int last = l.back();

    //std::cout << "Longest span first=" << first << "Last=" << last << std::endl;

    return last - first;
}