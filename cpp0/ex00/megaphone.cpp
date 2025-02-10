/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:17:32 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/09 12:23:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    i = 1;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            argv[i][j] = toupper(argv[i][j]);
            j++;
        }
        std::cout << argv[i++] << ' ';
    }
    std::cout << std::endl;
    return (0);
}
