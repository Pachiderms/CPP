/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/17 14:00:24 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool signedIndicator;
        const int gradeToSign;
        const int gradeToExec;
    public:
        Form();
        Form(std::string const _name, int _gardeToSign, int _gradeToExec);
        Form(const Form &other);
        Form& operator=(const Form& form);
        ~Form() {}
        
        const std::string getName() const;
        const bool isSigned() const;

        const void gradeToSignIncrement();
        const void gradeToSignDecrement();
        const void gradeToExecIncrement();
        const void gradeToExecDecrement();

        bool beSigned(Bureaucrat & buro)const;

        const int getGradeToSign() const;
        const int getGradeToExec() const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too High Exception");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too Low To Sign Form");
                }
        };
        
};

std::ostream& operator<<(std::ostream & o, const Form & form);
