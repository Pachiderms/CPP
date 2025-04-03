/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:14:45 by pachiderms        #+#    #+#             */
/*   Updated: 2025/04/03 13:58:48 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const _name, int _grade){
    std::cout << "Parameter constructor called" << std::endl;
    try{
        if (_grade > 150)
            throw GradeTooLowException();
        if (_grade < 0)
            throw GradeTooHighException();
    }
    catch(std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade){
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& buro){
    std::cout << "Copy assignment operator called" << std::endl;
    // if (this != &buro)
    //     this->name = buro.getName();
    return *this;
}

const std::string Bureaucrat::getName()const{
    std::cout << "getName member function called" << std::endl;
    return this->name;
}

int Bureaucrat::getGrade(){
    std::cout << "getGrade member function called" << std::endl;
    return this->grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called" << std::endl;
}
