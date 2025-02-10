/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:23:34 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 20:23:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str << " ptr " << stringPTR << " ref " <<
        &stringREF << std::endl;

    std::cout << str << " ptr " << *stringPTR << " ref " <<
        stringREF << std::endl;

    str = "NEW TEXT";
    std::cout << &str << " ptr " << stringPTR << " ref " <<
        &stringREF << std::endl;

    std::cout << str << " ptr " << *stringPTR << " ref " <<
        stringREF << std::endl;
    return 0;
}
