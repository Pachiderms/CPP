/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:23:51 by marvin            #+#    #+#             */
/*   Updated: 2025/09/26 14:23:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(PresidentialPardonForm const & other);
        PresidentialPardonForm &operator=(PresidentialPardonForm const & pr);
        virtual ~PresidentialPardonForm(){};

    protected:
        void execute(Bureaucrat const & executor) const;
};
