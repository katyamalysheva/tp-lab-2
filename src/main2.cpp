//
// Created by mikhail on 25.09.2019.
//

#include "task2.h"
#include <bits/stdc++.h>

template<class T>
T gen()
{
    return rand() % 2048;
}

int main(){

    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen);
    for(int i = 0;i < n;i++)
        std::cout << arr[i] << ' ';
    delete[] arr;
    return 0;
}