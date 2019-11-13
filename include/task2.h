//
// Created by mikhail on 25.09.2019.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template <typename T, int n>
T* createArr(T (*gen)(void)){
    T* a = new T[n];
    for(int i = 0;i < n;i++){
        a[i] = gen();
    }
    return a;
}

#endif //TASK1_TASK2_H
