//
// Created by Mary on 09.10.2019.
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
void msort(T* Arr,size_t n){
    long int middle = n/2; //находим середину массива
    if (n > 1) msort(Arr, n/2); // проверяем требуется ли продолжать деление
    if (n > 1) msort(Arr+(n/2),n- n/2);
    T* ArrRes  = new T[(n)];
    long int i = 0, j = n/2;
    for (long int k = 0; k < n; k ++){ //Слияние
        if ((j >= n)||((i < n/2)&&(cmp(Arr[i], Arr[j])))){//Добавляется либо меньший элемент, либо оставшийся
            ArrRes[k] = Arr[i];
            i ++;
        }
        else{
            ArrRes[k] = Arr[j];
            j ++;
        }
    }
    for (long int i = 0; i < n; i ++){//Перезаписываем массив
        Arr[i] = ArrRes[i];
    }

}
#endif //TASK1_TASK1_H
