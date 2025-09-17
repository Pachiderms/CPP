#pragma once

#include <iostream>

template <typename T> static void swap(T & x, T & y){
    T _x = x;
    x = y;
    y = _x;
    return ;
}

template <typename T> static T max(T x, T y){
    return x > y ? x : y;
}

template <typename T> static T min(T x, T y){
    return x < y ? x : y;
}
