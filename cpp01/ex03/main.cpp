/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:14:29 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 23:14:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon riffle = Weapon("riffle");
    Weapon batarang = Weapon();

    HumanA carlos("Carlos", riffle);
    carlos.attack();
    riffle.setType("tacos");
    carlos.attack();

    HumanB batman("Batman");
    batman.setWeapon(batarang);
    batman.attack();
    batarang.setType("batarang");
    batman.attack();

    return 0;
}
