/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:54:20 by tzizi             #+#    #+#             */
/*   Updated: 2025/10/06 17:24:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"
# include <iostream>

int main(int ac, char **av)
{    
    if (ac < 2)
        return 0;
    for (int i = 1; i < ac; i++){
        ScalarConverter::convert(std::string(av[i]));
    } 
    return 0;
}
