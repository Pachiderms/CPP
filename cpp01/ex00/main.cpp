/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:25:47 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/10 19:25:47 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie carlos = Zombie("Carlos");
    
    carlos.announce();
    randomChump("Max");

    Zombie* carlton = newZombie("Carlton");

    std::cout << "back to main" << std::endl;
    carlos.announce();
    carlton->announce();

    delete carlton;
    return 0;
}
