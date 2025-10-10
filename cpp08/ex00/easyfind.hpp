/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:11:09 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/10 14:26:33 by tzizi            ###   ########.fr       */
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

    (void)f;
    //not working for queues or stacks since they have no iterator
    for(first = v.begin(); first != v.end(); first++){
        if (*first == f)
            return  *first;
    }

    return -1;
}