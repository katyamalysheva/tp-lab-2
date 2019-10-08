//
// Created by mikhail on 25.09.2019.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>
#include <cstring>
template <typename T, int n>
void map(T* a, T (*change)(T value)){
    for(size_t i = 0;i < n;i++){
        a[i] = change(a[i]);
    }
}

template <typename T, int n>
void map(char** a, char* (*change)(char* value)){
    for(size_t i = 0;i < n;i++){
        char* w = new char[strlen(a[i]) + 1];
        for(size_t j = 0;j < strlen(a[i]);j++){
            w[j] = a[i][j];
        }
        w[strlen(a[i])] = '\0';
        a[i] = change(w);
    }
}

#endif //TASK1_TASK3_H
