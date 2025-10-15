/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:02:34 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/15 15:45:23 by marvin           ###   ########.fr       */
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
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
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
    std::cout << lstack.back() << std::endl;//back car stack::top appartient a dequeu donc first in last out!
    lstack.pop_back();
    std::cout << lstack.size() << std::endl;
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