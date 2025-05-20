/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:55:57 by pachiderms        #+#    #+#             */
/*   Updated: 2025/05/15 14:59:17 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    Fixed c(10.125f);
    Fixed d = c++;

    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
    std::cout << Fixed::min(c, d) << std::endl;

    Fixed e(11.01f);
    Fixed f = ++e;

    std::cout << e << std::endl;
    std::cout << f << std::endl;
    
    std::cout << Fixed::min(e, f) << std::endl;

    Fixed g(10);
    Fixed h(Fixed(10.2f) + Fixed(9.8f));

    std::cout << g << std::endl;
    std::cout << h << std::endl;
    std::cout << h / 4 << std::endl;
    
    std::cout << Fixed::max(g, h) << std::endl;
    std::cout << g.operator!=(h) << std::endl;
    std::cout << g.operator==(h/2) << std::endl;
    std::cout << g.operator>=(h) << std::endl;
    std::cout << g.operator<=(h) << std::endl;
    std::cout << g.operator<=(h/2) << std::endl;
    std::cout << g.operator>=(h/2) << std::endl;
    std::cout << "END" << std::endl;
    
    return 0;
}
    