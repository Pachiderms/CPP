/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:17:55 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 14:38:44 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        ~MutantStack(){}
        MutantStack(const MutantStack & other) { *this = other; }
        MutantStack& operator=(const MutantStack & other){
            if (this != *other){
                std::stack<T>::operator=(other);
            }
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};