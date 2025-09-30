/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/30 15:01:34 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool signedIndicator=false;
        const int gradeToSign;
        const int gradeToExec;
    public:
        AForm();
        AForm(std::string const _name, int _gardeToSign, int _gradeToExec);
        AForm(const AForm &other);
        AForm& operator=(const AForm& form) = delete;
        virtual ~AForm() {}

        virtual void execute(Bureaucrat const & executor) const;
        
        std::string getName() const;
        bool isSigned() const;

        void beSigned(const Bureaucrat& buro);

        int getGradeToSign() const;
        int getGradeToExec() const;

        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("AForm Already Signed Exception.");
                }
        };

        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("AForm Not Signed Exception.");
                }
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too High To Sign AForm Exception.");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade Too Low To Sign AForm Exception.");
                }
        };
        
};

std::ostream& operator<<(std::ostream & o, const AForm & AForm);
