#pragma once

#include <iostream>

template <typename T>
void swap(T & x, T & y){
    T _x = x;
    x = y;
    y = _x;
    return ;
}

template <typename T>
const T max(T x, T y){
    return x > y ? x : y;
}

template <typename T>
const T min(T x, T y){
    return x < y ? x : y;
}

template <typename T>
const T* Max(T &x, T &y){
    return x > y ? &x : &y;
}

template <typename T>
const T* Min(T &x, T &y){
    return x < y ? &x : &y;
}

