/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:58:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/17 14:00:03 by tzizi            ###   ########.fr       */
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

    Bureaucrat minus("minus", 52);
    std::cout << minus;
    
    Bureaucrat failSign("Fail", 101);

    Form form("My Form", 100, 50);
    std::cout << form;
    Form cp(form);
    std::cout << cp;

    failSign.signForm(form);
    plus.signForm(form);
    minus.signForm(form);

    form.gradeToExecDecrement();
    
    return 0;
}