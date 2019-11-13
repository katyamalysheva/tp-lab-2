//
// Created by fiskirton on 10/16/19.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <cstring>


template <class T, unsigned int n>
void map(T arr[], T(*change)(T)){
    for (unsigned int i = 0; i < n; ++i) {
        arr[i] = change(arr[i]);
    }
}
#endif //TASK1_TASK3_H
