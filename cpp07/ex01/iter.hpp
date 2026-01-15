#pragma once

# include <iostream>

template <typename T, typename Fun>
void iter(T *arr, int const length, Fun foo) {
    if (!arr || !foo)
        return ;
    for (int i = 0; i < length; i++){
        foo(arr[i]);
    }
}
