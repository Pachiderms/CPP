/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:58:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 15:37:50 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat buro("Test", 250);

    Bureaucrat plus("plus", 0);
    std::cout << plus;
    plus.gradeIncrement();
    std::cout << plus;
    plus.gradeDecrement();
    std::cout << plus;
    plus.gradeDecrement();
    std::cout << plus;

    Bureaucrat minus("minus", 150);
    std::cout << minus;
    minus.gradeIncrement();
    std::cout << minus;
    minus.gradeDecrement();
    std::cout << minus;
    minus.gradeDecrement();
    std::cout << minus;
    minus.gradeDecrement();
    std::cout << minus;
    return 0;
}