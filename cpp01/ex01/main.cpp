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

int main()
{
    int N = 5;
    Zombie* zh = zombieHorde(N, "Carlos");

    std::cout << "first zombie ptr " << &zh[0] << std::endl;

    for(int i=0; i < N; i++){
        zh[i].announce();
    }

    delete [] zh;
    return 0;
}
