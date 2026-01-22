/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:02:34 by tzizi             #+#    #+#             */
/*   Updated: 2026/01/22 16:37:44 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    
    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "--------------------------------MutantStack--------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";
    
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "last elem: " << mstack.top() << std::endl;//17 -> 5|17
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;//1 -> 5|
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);// 5|3|5|737|0|
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "-----------------------------------LIST------------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";

    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << "last elem: " << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << "size: " << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    std::list<int>::iterator il = lstack.begin();
    std::list<int>::iterator ile = lstack.end();
    ++il;
    --il;
    while (il != ile)
    {
        std::cout << *il << std::endl;
        ++il;
    }
    
    return 0;
}