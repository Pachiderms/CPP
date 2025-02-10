/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:20:29 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/08 20:20:29 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
    std::string buff;

    PhoneBook book;
    while (buff != "EXIT")
    {
        std::cout << std::setfill('-') << std::setw(39) << "-" << std::endl;
        std::cout << std::setfill('-') << std::setw(39) << "-" << std::endl;
        std::cout << std::setfill(' ') << std::setw(28) << "'ADD' TO ADD CONTACT" << std::endl;
        std::cout << std::setfill(' ') << std::setw(33) << "'SEARCH' TO SHOW CONTACT INFOS" << std::endl;
        std::cout << std::setfill(' ') << std::setw(24) << "'EXIT' TO EXIT" << std::endl;
        std::cout << std::setfill('-') << std::setw(39) << "-" << std::endl;
        std::cout << std::setfill('-') << std::setw(39) << "-" << std::endl;
        std::cin >> buff;
        if (buff == "ADD")
            book.AddContact();
        else if (buff == "SEARCH")
                book.SearchContact();
    }
    return (0);
}
