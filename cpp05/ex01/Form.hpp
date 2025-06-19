/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:53:07 by tzizi             #+#    #+#             */
/*   Updated: 2025/06/19 16:01:36 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define FORM_HPP

# include <iostream>
# include "Grade.hpp"
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool signedIndicator;
        const Grade gradeToSign;
        const Grade gradeToExec;
    public:
        Form();
        Form(std::string const _name, int _gardeToSign, int _gradeToExec);
        Form(const Form &other);
        Form& Form::operator=(const Form& form);
        ~Form() {}
        

        void gradeToSignIncrement();
        void gradeToSignIncrement();
        void gradeToExecIncrement();
        void gradeToExecDecrement();
        bool beSigned(Bureaucrat buro);
        
};