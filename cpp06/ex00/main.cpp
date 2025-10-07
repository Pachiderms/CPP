/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:54:20 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/07 13:22:13 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"
# include <iostream>

int main(int ac, char **av)
{
    //ScalarConverter conv = new ScalarConverter();
    if (ac < 2)
        return 0;
    for (int i = 1; i < ac; i++){
        ScalarConverter::convert(std::string(av[i]));
    }

    return 0;
}
