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
    //std::cout << x << std::endl;
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
        std::cout << "Identified as A." << std::endl;
    }
    else if (B* b = dynamic_cast<B*>(p)){
        (void)b;
        std::cout << "Identified as B." << std::endl;
    }
    else if (C* c = dynamic_cast<C*>(p)){
        (void)c;
        std::cout << "Identified as C." << std::endl;
    }
    else
        std::cout << "WTF IS THIS ?\n";
}

// dynamic_cast returns a null pointer if the object referred 
// to doesn't contain the type casted to as a base class
// when you cast to a reference, a bad_cast exception is thrown
// a static _cast doesn't because there is no type check.
void identify(Base& p)
{
    try{
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Identified as A." << std::endl;
    }
    catch (std::exception & e){std::cerr << e.what() << std::endl;}
    try{
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Identified as B." << std::endl;
    }
    catch (std::exception & e){std::cerr << e.what() << std::endl;}
    try{
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Identified as C." << std::endl;
    }
    catch (std::exception & e){std::cerr << e.what() << std::endl;}
}

int main()
{
    Base* flip = generate();
    
    identify(flip);
    identify(*flip);

    delete flip;
    return 0;
}
