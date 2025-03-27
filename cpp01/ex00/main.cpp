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
#include <iostream>
#include <string>

int main(){

    Zombie carlos = Zombie("Carlos");
    
    carlos.announce();
    randomChump("Stack");

    Zombie* heap = newZombie("Heap");

    std::cout << "back to main" << std::endl;
    carlos.announce();
    heap->announce();

    delete heap;
    return 0;
}
