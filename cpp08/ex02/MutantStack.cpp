/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:27:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 14:55:29 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

// MutantStack::MutantStack(unsigned int N){}

// MutantStack::MutantStack(const MutantStack& other){
//     (void)other;
// }

// MutantStack& MutantStack::operator=(const MutantStack& other)
// {
//     (void)other;
//     return *this;
// }

template <class T>
T& MutantStack<T>::top(){
    return NULL;
}

template <class T>
const T& MutantStack<T>::top()const{
    return NULL;
}

template <class T>
bool MutantStack<T>::empty()const{
    return false;
}

template <class T>
size_t MutantStack<T>::size()const{
    return 0;
}

template <class T>
void MutantStack<T>::pop(){

}

template <class T>
void MutantStack<T>::push(){
    
}