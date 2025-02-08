/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:17:32 by tzizi             #+#    #+#             */
/*   Updated: 2025/02/08 14:52:17 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    i = 1;
    if (argc < 2)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
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
        cout << argv[i++] << ' ';
    }
    cout << endl;
    return (0);
}
