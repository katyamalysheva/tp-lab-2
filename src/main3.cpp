//
// Created by Илья Соловьёв on 14/10/2019.
//

#include <iostream>
#include "task3.h"
#include <cstring>

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
    const size_t n1 = 5;
    int arrInt[n1]{1, 2, 3, 4, 5};
    map<int, n1>(arrInt, change);
    for (size_t i = 0; i < n1; i++)
        cout << arrInt[i] << " ";
    cout << endl;

    return 0;


}