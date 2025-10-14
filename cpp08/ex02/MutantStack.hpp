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
#include <deque>
#include <stack>
#include <vector>
#include <ctime>

template <class T>
class MutantStack
{
    public:
        MutantStack();
        ~MutantStack(){};
        MutantStack(unsigned int N);
        MutantStack(const MutantStack & other);
        MutantStack& operator=(const MutantStack & other);

        bool empty()const;
        size_t size()const;

        void pop();
        void push(const T& value);

        T& top();
        const T& top()const;
};