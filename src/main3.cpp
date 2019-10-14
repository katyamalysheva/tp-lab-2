//
// Created by Илья Соловьёв on 14/10/2019.
//
#include <iostream>

using namespace std;


template<class T>
T change(T val) {
    return val + 1;
}

template<>
char *change(char *val) {
    size_t n = strlen(val);
    for (size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}

int main() {

    return 0;
}