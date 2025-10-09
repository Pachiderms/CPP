/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:41:55 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 13:41:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
    srand(time(NULL));
    int x = rand() % 100;
    std::cout << x << std::endl;
    if (x <= 33){
        std::cout << "Randaom A." << std::endl;
        return new A();
    }
    else if (x <= 66){
        std::cout << "Randaom B." << std::endl;
        return new B();
    }
    else
    {
        std::cout << "Randaom C." << std::endl;
        return new C();
    }
}

void identify(Base* p)
{
    if (A* a = dynamic_cast<A*>(p)){
        (void)a;
        std::cout << "Identifeied as A." << std::endl;
    }
    else if (B* b = dynamic_cast<B*>(p)){
        (void)b;
        std::cout << "Identifeied as B." << std::endl;
    }
    else if (C* c = dynamic_cast<C*>(p)){
        (void)c;
        std::cout << "Identifeied as C." << std::endl;
    }
    else
        std::cout << "WTF IS THIS ?\n";
}

void identify(Base& p)
{
    try{
        dynamic_cast<A&>(p);
        std::cout << "Identifeied as A." << std::endl;
    }
    catch (...){}
    try{
        dynamic_cast<B&>(p);
        std::cout << "Identifeied as B." << std::endl;
    }
    catch (...){}
    try{
        dynamic_cast<C&>(p);
        std::cout << "Identifeied as C." << std::endl;
    }
    catch (...){}
}

int main()
{
    Base* flip = generate();
    
    identify(flip);
    identify(*flip);

    delete flip;
    return 0;
}