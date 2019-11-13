//
// Created by Илья Соловьёв on 14/10/2019.
//

#include <iostream>
#include "task2.h"

using namespace std;

template<typename T>
T gen() {
    return rand() % 100;
}

char *gen() {

    char *s = new char[50];
    for (int i = 0; i < 49; i++) {
        s[i] = '0' + rand() % 10;
    }
    s[50] = 0;
    return s;
}

int main() {
    const int n = 4;
    //test Int
    int *arrInt = createArr<int, n>(&gen);
    for (size_t i = 0; i < n; i++) {
        cout << arrInt[i] << " ";
    }
    cout << endl;
    //test char*
    auto *arrChar = createArr<char *, n>(&gen);
    for (size_t i = 0; i < n; i++) {
        cout << arrChar[i] << " ";
    }
    cout << endl;
    return 0;
}