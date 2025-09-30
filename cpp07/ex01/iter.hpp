#pragma once

# include <iostream>

template <typename A, A (*f)(A)>
static void iter(A * arr, int length, A (*f)(A)) {
    for (int i = 0; i < length; i++){
        f(arr[i]);
    }
    return ;
}

template <typename Element>
static void f (Element &e){
    e++;
    return;
}