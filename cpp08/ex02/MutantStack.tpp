/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:32:08 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 12:42:49 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> & other){
    if (this != *other){
        std::stack<T>::operator=(other);
    }
    return *this;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & other) { *this = other; }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin(); }
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end(); }