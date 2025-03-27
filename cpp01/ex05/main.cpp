/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:36:14 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/11 12:36:14 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INFO");
    return 0;
}