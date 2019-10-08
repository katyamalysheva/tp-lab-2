//
// Created by mikhail on 25.09.2019.
//

#include "task3.h"
template <typename T>
T change(T value){
    return value * value;
}

int main(){

    const size_t n = 5;
    int arr[n]{4, 2, 1, 3, 5};
    map<int, n>(arr, change);
    for(int i = 0;i < n;i++)
        std::cout << arr[i] << ' ';
    return 0;
}