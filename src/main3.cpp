//
// Created by Илья Соловьёв on 14/10/2019.
//

#include <iostream>
#include "task3.h"
#include <cstring>
#include <string>
#include <sstream>


using namespace std;

template<class T>
T change(T a) {
    return a + 1;
}

template<>
char *change(char *str) {
    static int n = 0;
    n++;
    str[0] = '0' + n % 10;
    return str;
}

int main() {
    const size_t n1 = 5;

    int arrInt[n1]{1, 2, 3, 4, 5};
    map<int, n1>(arrInt, change);
    for (size_t i = 0; i < n1; i++)
        cout << arrInt[i] << " ";
    cout << endl;

    char *arrChar[4] = {(char *) "100\0", (char *) "223\0", (char *) "234\0", (char *) "99\0"};
    map<char *, 4>(arrChar, change);
    for (int i = 0; i < 4; i++) {
        puts(arrChar[i]);
    }
    cout << endl;

    return 0;


}