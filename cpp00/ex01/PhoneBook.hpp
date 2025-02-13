/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:21:22 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/08 17:21:22 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class   PhoneBook
{
    private:
        Contact contacts[8];
        int     max_contacts;
        int     index;
        int     oldest_index;
        int     nb_contacts;
    public:
        PhoneBook();
        ~PhoneBook();
        void    AddContact();
        void    SearchContact();
};

#endif