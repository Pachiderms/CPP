/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:49:12 by tzizi             #+#    #+#             */
/*   Updated: 2025/09/30 15:49:13 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("base_shrubberry", 145, 137){ 
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target + "_shrubbery", 145, 137){
    
}
// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other);
// ShrubberyCreationForm&::operator=(const ShrubberyCreationForm& scf) = delete;
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::ofstream file;
    file.open(this->getName());
    file << system("tree");
    file.close();
    return ;
}