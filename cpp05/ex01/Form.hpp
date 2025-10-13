 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/26 14:12:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

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
        
        std::string getName() const;
        bool isSigned() const;

        void beSigned(const Bureaucrat& buro);

        int getGradeToSign() const;
        int getGradeToExec() const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
};

std::ostream& operator<<(std::ostream & o, const Form & form);
