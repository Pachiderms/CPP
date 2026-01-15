# include "whatever.hpp"
# include <iostream>

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    int const* minInt = ::min(a, b);
    int const* maxInt = ::max(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << *minInt << std::endl;
    std::cout << "max( a, b ) = " << *maxInt << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::string const* minStr = ::min(c, d);
    std::string const* maxStr = ::max(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << *minStr << std::endl;
    std::cout << "max( c, d ) = " << *maxStr << std::endl;

    std::cout << "------------END main.cpp tests------------\n";

    char e = 'e';
    char f = 'f';
    ::swap(e, f);
    char const* minChar = ::min(e, f);
    char const* maxChar = ::max(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << *minChar << std::endl;
    std::cout << "max( e, f ) = " << *maxChar << std::endl;

    float g = 2.5f;
    float h = 42.0f;
    ::swap(g, h);
    float const* minFloat = ::min(g, h);
    float const* maxFloat = ::max(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << *minFloat << std::endl;
    std::cout << "max( g, h ) = " << *maxFloat << std::endl;

    std::string i = "abc";
    std::string j = "abc";
    std::string const* min = ::min(i, j);
    std::string const* max = ::max(i, j);
    std::cout << "i = " << i << "->" << &i << ", j = " << j << "->" << &j << std::endl;
    std::cout << "min( i, j ) = " << min << std::endl;
    std::cout << "max( i, j ) = " << max << std::endl;

    return 0;
}