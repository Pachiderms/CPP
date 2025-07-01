/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:58:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/07/01 11:37:53 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"
#include <iostream>

int main()
{
    Bureaucrat buro("Test", 250);

    Bureaucrat plus("plus", 99);
    std::cout << plus;
    plus.gradeIncrement();
    std::cout << plus;
    plus.gradeDecrement();
    std::cout << plus;
    plus.gradeDecrement();
    std::cout << plus;

    Bureaucrat minus("minus", 52);
    std::cout << minus;
    minus.gradeIncrement();
    std::cout << minus;
    minus.gradeIncrement();
    std::cout << minus;
    minus.gradeIncrement();
    std::cout << minus;
    minus.gradeIncrement();
    std::cout << minus;
    
    std::cout<< " PLUS: " << plus << " MINUS: " << minus << std::endl;
    Bureaucrat failSign("Fail", 101);

    Form form("My Form", 100, 50);

    form.signForm(failSign);
    form.signForm(plus);
    form.signForm(minus);

    
    
    return 0;
}