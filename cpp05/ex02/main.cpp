/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:27:13 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/14 11:51:34 by marvin           ###   ########.fr       */
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
    Bureaucrat boss("Boss", 1);
    
    Bureaucrat worker("Worker", 50);

    Bureaucrat sbire("Sbire", 150);
    
    ShrubberyCreationForm s("nowhere");
    RobotomyRequestForm r("robot");
    PresidentialPardonForm p("Mr_president");
    std::cout << s << r << p << std::endl;
    std::cout << boss << worker << sbire;

    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "----------------------------Shrubbery Test---------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";

    try{
        sbire.signForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        worker.signForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        boss.signForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        sbire.executeForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        worker.executeForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        boss.executeForm(s);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "-----------------------------Robotomy Test---------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";

    std::cout << s << r << p << std::endl;
    std::cout << boss << worker << sbire;

    try{
        sbire.signForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        worker.signForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        boss.signForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        sbire.executeForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        worker.executeForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        boss.executeForm(r);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------\n";
    std::cout << "----------------------------Presidential Test------------------------------------\n";
    std::cout << "---------------------------------------------------------------------------------\n";

    std::cout << s << r << p << std::endl;
    std::cout << boss << worker << sbire << std::endl;

    try{
        sbire.signForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        worker.signForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        boss.signForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        sbire.executeForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        worker.executeForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    try{
        boss.executeForm(p);
    }
    catch(std::exception & e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}