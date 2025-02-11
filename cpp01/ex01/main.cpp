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

    int N = 5;
    Zombie* zh = zombieHorde(N, "Carlos");

    test(zh[2]);
    for(int i=0; i < N; i++){
        zh[i].Brainz();
    }

    delete [] zh;
    return 0;
}
