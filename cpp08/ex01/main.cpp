/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:30:38 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 14:55:54 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span span0(5);
    Span span1(10);

    for (int i=1;i<5;i++){span0.addNumber(i);}

    srand(time(NULL));
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

    return 0;
}