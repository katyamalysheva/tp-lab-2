//
// Created by fiskirton on 10/16/19.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstdio>
#include <cstring>



template <class T, int n>
T * createArr(T(*gen)()){
    T * arr = new T[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = gen();
    }
    return arr;
}

#endif //TASK1_TASK2_H
