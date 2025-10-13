/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:27:13 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 17:25:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat plus("plus", 99);
    std::cout << plus;

    Bureaucrat minus("minus", 50);
    std::cout << minus;
    
    ShrubberyCreationForm s("nowhere");
    PresidentialPardonForm p("Mr_president");
    RobotomyRequestForm r("robot");

    std::cout << s << r << p << std::endl;

    try{
        plus.signForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        plus.signForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        plus.signForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        plus.executeForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        plus.executeForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        plus.executeForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}