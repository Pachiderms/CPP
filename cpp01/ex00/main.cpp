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

void    test(Zombie z){
    z.Brainz();
    return ;
}

int main(){

    Zombie zombie = Zombie("Carlos");

    Zombie* new_zombie = newZombie("Carlton");

    test(zombie);
    randomChump("Max");
    delete new_zombie;
    return 0;
}
