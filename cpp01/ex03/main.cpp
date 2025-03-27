/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:14:29 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/10 23:14:29 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon riffle = Weapon("riffle");

    HumanA carlos("Carlos", riffle);
    carlos.attack();
    riffle.setType("tacos");
    carlos.attack();

    Weapon batarang = Weapon();
    HumanB batman("Batman");
    batman.setWeapon(batarang);
    batman.attack();
    batarang.setType("batarang");
    batman.attack();

    return 0;
}
