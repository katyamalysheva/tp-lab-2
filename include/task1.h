//
// Created by fiskirton on 10/16/19.
//
#include <iostream>
#include <cstring>
using namespace std;

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

template <class T>
T comparator(T item1, T item2){
    return item1 - item2;
}

long comparator(char * str1, char* str2){
    return (long)(strlen(str1) - strlen(str2));
}

template <class T>
void msort(T *a, int n)
{
    int step = 1;
    T *temp = new T[n];
    while (step < n)
    {
        int index = 0;
        int left_edge = 0;
        int mid = left_edge + step;
        int right_edge = left_edge + step * 2;
        while (left_edge < n){
            mid = mid < n ? mid : n;
            right_edge = right_edge < n ? right_edge : n;
            int left_pointer = left_edge, right_pointer = mid;
            for (; left_pointer < mid && right_pointer < right_edge; )
            {
                if (comparator(a[left_pointer], a[right_pointer]) < 0) {
                    temp[index++] = a[left_pointer++];
                }else {
                    temp[index++] = a[right_pointer++];
                }
            }
            while (left_pointer < mid){
                temp[index++] = a[left_pointer++];
            }
            while (right_pointer < right_edge) {
                temp[index++] = a[right_pointer++];
            }
            left_edge += step * 2;
            mid += step * 2;
            right_edge += step * 2;
        }
        for (int i = 0; i < n; i++)
            a[i] = temp[i];
        step *= 2;
    }
    delete[]temp;
}


#endif //TASK1_TASK1_H
