/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:11:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/15 14:33:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <list>
#include <deque>

class NFE : public std::exception
{
    public:
        virtual const char* what() const throw(){
            return ("Value Not Found.");
        }
};

template <typename T>
typename T::iterator easyfind(T v, int val)
{
    typename T::iterator it = std::find(v.begin(), v.end(), val);
    if (it == v.end())
        throw NFE();
    return it;
}