/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:58:31 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 15:44:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try{
        Bureaucrat buro("Test", 250);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        Bureaucrat plus("plus", 0);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat *minus = new Bureaucrat();
    std::cout << *minus;

    try{
        minus->gradeIncrement();
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << *minus;

    try{
        minus->gradeDecrement();
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << *minus;

    try{
        minus->gradeDecrement();
    }
    catch(Bureaucrat::GradeTooHighException & e){
        std::cerr << "Trying to catch GTH Exception: " << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException & e){
        std::cerr << "catching good error: " << e.what() << std::endl;
    }
    std::cout << *minus;

    try{
        minus->gradeIncrement();
    }
    catch(Bureaucrat::GradeTooLowException & e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << *minus;

    delete minus;

    return 0;
}