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

Bureaucrat::Bureaucrat(std::string const _name, int _grade): name(_name){
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

void Bureaucrat::gradePlus(int plus){
    try{
        if (grade - plus < 0)
            throw GradeTooHighException();
        else
            grade -= plus;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

void Bureaucrat::gradeMinus(int minus){
    try{
        if (grade + minus > 150)
            throw GradeTooHighException();
        else
        grade += minus;
    }
    catch (std::exception & e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return ;
}

const std::string Bureaucrat::getName()const{
    return this->name;
}

int Bureaucrat::getGrade()const{
    return this->grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat& buro){
    o << buro.getName() << ", " << "bureaucrat grade " << buro.getGrade() <<std::endl;
    return o;
}
