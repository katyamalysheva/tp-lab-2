//
// Created by Илья Соловьёв on 14/10/2019.
//

#ifndef TP_LAB_2_TASK1_H
#define TP_LAB_2_TASK1_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

template<typename T>
bool cmp(T x, T y) {
    return x < y;
}

template<>
bool cmp(char *x, char *y) {
    return strlen(x) < strlen(y);
}

template<typename T>
void msort(T *Arr, int n) {
    long int middle = n / 2;
    if (n > 1) msort(Arr, n / 2);
    if (n > 1) msort(Arr + (n / 2), n - n / 2);
    T *ArrRes = new T[n];


    int i = 0, j = n / 2, res = 0;

    while ((i < n / 2) && (j < n)) {
        if (cmp(Arr[i], Arr[j])) {
            ArrRes[res] = Arr[i];
            i++;
            res++;
        } else {
            ArrRes[res] = Arr[j];
            j++;
            res++;
        }
    }

    while (i < n / 2) {
        ArrRes[res] = Arr[i];
        i++;
        res++;
    }

    while (j < n) {
        ArrRes[res] = Arr[j];
        j++;
        res++;
    }


    for (long int i = 0; i < n; i++) {
        Arr[i] = ArrRes[i];
    }

}

#endif //TP_LAB_2_TASK1_H
