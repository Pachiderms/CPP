/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:20:04 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/08 20:20:04 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

void    Contact::SetInfos(std::string _first_name, std::string _last_name,
    std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
    this->first_name = _first_name;
    this->last_name = _last_name;
    this->nickname = _nickname;
    this->phone_number = _phone_number;
    this->darkest_secret = _darkest_secret;
    return ;
}

std::string FormatString(std::string str)
{
    if (str.size() > 10)
        return (str.substr(0, 9) += '.');
    return (str);
}

void    Contact::ShowInfos()
{
    std::cout << "FIRST NAME :" << this->first_name << std::endl;
    std::cout << "LAST NAME :" << this->last_name << std::endl;
    std::cout << "NICKNMAE :" << this->nickname << std::endl;
    std::cout << "PHONE NUMBER :" << this->phone_number << std::endl;
    std::cout << "DARKEST SECRET :" << this->darkest_secret << std::endl;
    return ;
}

void    Contact::Name(int index)
{
    std::cout << std::setfill(' ') << std::setw(9) << index << "|";
    std::cout << std::setfill(' ') << std::setw(9) << FormatString(this->first_name) << '|';
    std::cout << std::setfill(' ') << std::setw(9) << FormatString(this->last_name) << '|';
    std::cout << std::setfill(' ') << std::setw(9) << FormatString(this->nickname) << std::endl;
    return ;
}
