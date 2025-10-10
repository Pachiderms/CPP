/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:22:38 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/10 14:13:08 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int init[5] = {1, 2, 3, 4, 5};
    std::vector<int> v (init, init + 5);
    std::list<int> l (4, 2);
    std::deque<int> q;
    for (int i=0; i<5; i++) q[i]=i;
    std::cout << easyfind(v, 4) << std::endl;
    std::cout << easyfind(q, 3) << std::endl;
    std::cout << easyfind(l, 24) << std::endl;

    return 0;
}