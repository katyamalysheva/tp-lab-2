//
// Created by Mary on 13.10.2019.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
template <typename T,const size_t n>
void map(T* arr,T (*change)(T)){
    for(size_t i = 0; i < n; i ++)
    {
        arr[i] = change(arr[i]);
    }
}
#endif //TASK1_TASK3_H
