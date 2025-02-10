/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:20:07 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/08 20:20:07 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class   Contact
{
    private:
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;
    public:
        Contact();
        void    SetInfos(std::string name, std::string firstname,
            std::string _nickname, std::string phonenumber, std::string darkestsecret);
        void    Name(int index);
        void    ShowInfos();
};

#endif