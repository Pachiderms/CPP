#pragma once

# include <iostream>

template <typename T>
void iter(T *arr, int length, void (*foo)(T &)) {
    if (!arr || !foo)
        return ;
    for (int i = 0; i < length; i++){
        foo(arr[i]);
    }
}
