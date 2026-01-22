/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:11:09 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 12:11:29 by tzizi            ###   ########.fr       */
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

template <typename T>
typename T::iterator easyfind(T v, int val)
{
    typename T::iterator it = std::find(v.begin(), v.end(), val);
    if (it == v.end())
        throw std::runtime_error("Value not found.");
    return it;
}