/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:48:11 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/30 15:48:13 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        AForm& operator=(const ShrubberyCreationForm& scf) = delete;
        virtual ~ShrubberyCreationForm() {};

        void execute(Bureaucrat const & executor) const;
};