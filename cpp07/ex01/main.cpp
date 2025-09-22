# include "iter.hpp"
# include <iostream>

int main ()
{
    char charArray[] = {'a', 'b', 'c', 'd'};

    ::iter(&charArray, 4);

    return 0;
}