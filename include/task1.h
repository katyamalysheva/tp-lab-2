//
// Created by mikhail on 25.09.2019.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

template <typename T>
bool cmp(T x, T y){
    return x < y;
}

template <>
bool cmp(char* x, char* y){
    return strlen(x) < strlen(y);
}
template <typename T>
void startMergeSort(T* a, int l, int r){
    int m = (l + r) / 2;
    if(m - l > 1) startMergeSort(a, l, m);
    if(r - m > 1) startMergeSort(a, m, r);
    T w[r - l];
    int i = l, j = m, ind = 0;
    while(i < m && j < r){
        if(cmp(a[i], a[j])) w[ind++] = a[i++];
        else w[ind++] = a[j++];
    }
    while(i < m) w[ind++] = a[i++];
    while(j < r) w[ind++] = a[j++];
    ind = 0;
    for(int i = l;i < r;i++){
        a[i] = w[ind++];
    }
}

template <typename T>
void msort(T* a, int n) {
    startMergeSort(a, 0, n);
}






#endif //TASK1_TASK1_H
