/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:30:38 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/10 15:43:21 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span span0(5);
    Span span1(10);

    for (int i=1;i<5;i++){
        span0.addNumber(i);
    }

    
    for (int i=1; i < 10;i++){
        // int r = i=rand() % i;
        std::cout << "Number " << i << ": " << std::endl;
        span1.addNumber(i);
    }

    std::cout << span0.shortestSpan()<< std::endl;
    std::cout << span0.longestSpan()<< std::endl;

    std::cout << span1.shortestSpan()<< std::endl;
    std::cout << span1.longestSpan()<< std::endl;

    return 0;
}