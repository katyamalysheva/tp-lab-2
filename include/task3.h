//
// Created by Илья Соловьёв on 14/10/2019.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template<typename T, int n>
void map(T *Arr, T (*change)()) {
    for (int i = 0; i < n; i++) {
        Arr[i] = change;
    }
}

#endif //TASK1_TASK3_H
