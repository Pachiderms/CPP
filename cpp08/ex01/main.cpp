/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:30:38 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/15 15:13:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "---------------------------------Basic Tests-------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";
    Span span0(5);
    Span span1(10);

    srand(time(NULL));
    for (int i=0; i < 5;i++){
        int r = rand() % 100;
        std::cout << r << "|";
        span0.addNumber(r);
    }
    std::cout <<"\n";
    
    for (int i=0; i < 10;i++){
        int r = rand() % 100;
        std::cout << r << "|";
        span1.addNumber(r);
    }
    std::cout <<"\n";

    std::cout << span0.shortestSpan()<< std::endl;
    std::cout << span0.longestSpan()<< std::endl;

    std::cout << span1.shortestSpan()<< std::endl;
    std::cout << span1.longestSpan()<< std::endl;

    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "--------------------------------Short Span---------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";
    try{
        Span tooShort(1);
        tooShort.addNumber(42);
        std::cout << tooShort.shortestSpan()<< std::endl;
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "--------------------------------Big Span Fail------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";
    try{
        Span big(9999);
        std::vector<int> v;
        for (int i = 0; i < 10000; ++i)
            v.push_back(1);
        big.addRange(v.begin(), v.end());
        std::cout << big.shortestSpan()<< std::endl;
        std::cout << big.longestSpan()<< std::endl;
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "-------------------------------Big Span Success----------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";
    try{
        Span big(1000);
        std::vector<int> v;
        for (int i = 0; i < 1000; ++i)
            v.push_back(rand() % 1000);
        big.addRange(v.begin(), v.end());
        std::cout << big.shortestSpan()<< std::endl;
        std::cout << big.longestSpan()<< std::endl;
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}