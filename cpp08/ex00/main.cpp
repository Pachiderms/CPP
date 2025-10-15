/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:22:38 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/15 14:35:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int init[5] = {1, 2, 3, 4, 5};
    std::vector<int> v (init, init + 5);
    std::list<int> l (4, 2);
    std::deque<int> q;
    for (int i=0; i<5; i++) {q.push_back(i);};
    try{
        std::cout << *easyfind(v, 4) << std::endl;
        std::cout << *easyfind(q, 3) << std::endl;
        std::cout << *easyfind(l, 24) << std::endl;
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}