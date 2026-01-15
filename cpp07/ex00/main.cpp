# include "whatever.hpp"
# include <iostream>

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

    std::cout << "------------END main.cpp tests------------\n";

    char e = 'e';
    char f = 'f';
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
    std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;

    float g = 2.5f;
    float h = 42.0f;
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min(g, h) << std::endl;
    std::cout << "max( g, h ) = " << ::max(g, h) << std::endl;

    std::string i = "abc";
    std::string j = "abc";
    std::string const* min = ::Min(i, j);
    std::string const* max = ::Max(i, j);
    std::cout << "i = " << i << "->" << &i << ", j = " << j << "->" << &j << std::endl;
    std::cout << "min( i, j ) = " << min << std::endl;
    std::cout << "max( i, j ) = " << max << std::endl;

    return 0;
}