//
// Created by Mary on 13.10.2019.
//
#include <iostream>
#include "task2.h"
using namespace std;
template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

template<>
char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}
int main() {
    const size_t n = 10;
    //test Int
    int* arrInt = createArr<int, n>(&gen);
    for (size_t i = 0; i < n; i++)
    {
        cout << arrInt[i] << " ";
    }
    cout << endl;
    //test char*
    auto *arrChar = createArr<char*, n>(&gen);
    for (size_t i = 0; i < n; i++)
    {
        cout << arrChar[i] << " ";
    }
    cout << endl;
    return 0;
}
