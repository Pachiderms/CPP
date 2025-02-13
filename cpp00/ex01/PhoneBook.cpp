/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:56:12 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/08 17:56:12 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::AddContact()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    std::cout << "CONTACT FIRST NAME :" << std::endl;
    std::cin >> firstname;
    std::cout << "CONTACT LAST NAME :" << std::endl;
    std::cin >> lastname;
    std::cout << "CONTACT NICKNAME :" << std::endl;
    std::cin >> nickname;
    std::cout << "CONTACT PHONE NUMBER :" << std::endl;
    std::cin >> phonenumber;
    std::cout << "CONTACT DARKEST SECRET :" << std::endl;
    std::cin >> darkestsecret;
    
    Contact contact;
    contact.SetInfos(firstname, lastname, nickname, phonenumber, darkestsecret);

    if (this->nb_contacts >= max_contacts)
    {
        this->contacts[this->oldest_index] = contact;
        this->oldest_index = (this->oldest_index + 1) % max_contacts;
        this->index = (this->index + 1) % max_contacts;
    }
    else{
        this->contacts[this->index] = contact;
        this->nb_contacts++;
        this->index++;
    }
    return ;
}

void    PhoneBook::SearchContact()
{
    int i;

    i = 0;
    if (this->nb_contacts <= 0)
    {
        std::cout << "NO CONTACTS" << std::endl;
        return ;
    }
    while (i < this->nb_contacts)
    {
        this->contacts[i].Name(i);
        i++;
    }
    i = -1;
    while (i < 0 || i >= this->nb_contacts)
    {
        std::cout << "CONTACT INDEX ?" << std::endl;
        std::cin >> i;
    }
    this->contacts[i].ShowInfos();
    return ;
}

PhoneBook::PhoneBook() : max_contacts(8), index(0),
    oldest_index(0), nb_contacts(0){
    std::cout << "Welcome to a new PHONEBOOK" << std::endl;
}

PhoneBook::~PhoneBook(){
    std::cout << "PHONEBOOK Destroyed :All Contacts are lost" << std::endl;
}
