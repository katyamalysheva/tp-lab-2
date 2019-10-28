#ifndef TASK2_H
#define TASK2_H

#include <cstring>

template<typename T, const int n>

T *createArr(T (*gen)()) {
    T *arr = new T[n];
    for (size_t i = 0; i < n; i++)
        arr[i] = gen();
    return arr;
}

#endif // TASK2_H
