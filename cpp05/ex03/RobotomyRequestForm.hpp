/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:48:11 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/13 17:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(RobotomyRequestForm const & other);
        RobotomyRequestForm &operator=(RobotomyRequestForm const & robot);
        virtual ~RobotomyRequestForm(){};

    protected:
        void execute(Bureaucrat const & executor) const;
};