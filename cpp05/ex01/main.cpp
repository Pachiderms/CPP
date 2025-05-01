/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:58:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/04/03 15:25:40 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat buro("Test", 250);

    Bureaucrat plus("plus", 0);
    std::cout << plus;
    plus.gradePlus(1);
    std::cout << plus;
    plus.gradeMinus(10);
    std::cout << plus;
    plus.gradeMinus(139);
    std::cout << plus;
    plus.gradeMinus(2);
    std::cout << plus;
    return 0;
}