// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   Form.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/06/19 14:53:10 by tzizi             #+#    #+#             */
// /*   Updated: 2025/06/19 15:13:47 by tzizi            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// # include "Form.hpp"

// Form::Form() : name("Form"), grade(150){
//     std::cout << "Default constructor called" << std::endl;
// }

// Form::Form(std::string const _name, int _grade): name(_name){
//     std::cout << "Parameter constructor called" << std::endl;
//     try{
//         if (_grade > 150)
//             throw GradeTooLowException();
//         else if (_grade < 0)
//             throw GradeTooHighException();
//         else
//             grade = _grade;
//     }
//     catch(std::exception &e){
//         std::cout << "Exception: " << e.what() << std::endl;
//     }
// }

// Form::Form(const Form &other) : name(other.name), grade(other.grade){
//     std::cout << "Copy constructor called" << std::endl;
// }

// Form& Form::operator=(const Form& buro){
//     std::cout << "Copy assignment operator called" << std::endl;
//     if (this != &buro)
//     {
//         (std::string)this->name = buro.getName();
//         this->grade = buro.getGrade();
//     }
//     return *this;
// }

// void Form::gradeIncrement(){
//     try{
//         if (--grade < 0)
//             throw GradeTooHighException();
//         else
//             return;
//     }
//     catch (std::exception & e){
//         std::cout << "Exception: " << e.what() << std::endl;
//     }
//     return ;
// }

// void Form::gradeDecrement(){
//     try{
//         if (++grade > 150)
//             throw GradeTooHighException();
//         else
//             return;
//     }
//     catch (std::exception & e){
//         std::cout << "Exception: " << e.what() << std::endl;
//     }
//     return ;
// }

// const std::string Form::getName()const{
//     return this->name;
// }

// int Form::getGrade()const{
//     return this->grade;
// }

// void Form::signForm(Form form){
//     if (form.beSigned(*this)){std::cout << name << " signed " << form.getName() << std::endl;}
// }

// std::ostream & operator<<(std::ostream & o, const Form& buro){
//     o << buro.getName() << ", " << "bureaucrat grade " << buro.getGrade() <<std::endl;
//     return o;
// }