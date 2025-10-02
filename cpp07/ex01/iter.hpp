#pragma once

# include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*foo)(T &)) {
    if (!arr || !foo)
        return ;
    for (size_t i = 0; i < length; i++){
        foo(arr[i]);
    }
}
