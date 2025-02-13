/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:05:22 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/10 20:05:22 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* zombieHorde = new Zombie[N];
    std::cout << "zombie Horde ptr " << zombieHorde << std::endl;
    for (int i=0; i < N; i++){
        zombieHorde[i].SetName(name);
    }
    return zombieHorde;
}
