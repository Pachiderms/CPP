/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:11:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 14:36:22 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <list>
#include <deque>

template <typename T>
int easyfind(T v, int f){
    typename T::iterator first;

    for(first = v.begin(); first != v.end(); first++){
        if (*first == f)
            return  *first;
    }

    return -1;
}