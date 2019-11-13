//
// Created by Mary on 09.10.2019.
//
#include <iostream>
#include "task1.h"
#include <cstring>
using namespace std;
int main() {
    // test 2
    int n2 = 6;
    int* arrInt = new int[n2]{5, 3, 0, 1, 2, 4};

    msort(arrInt, n2);
    cout << "Test2\n";
    for (size_t i = 0; i < n2; i++)
    {
        cout << arrInt[i] << ' ';
    }
    cout << endl;

    //test3
    size_t n3 = 6;
    double *arrDouble = new double[n3]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(arrDouble, n3);
    cout <<"Test3\n";
    for (size_t i = 0; i < n3; i ++){
        cout << arrDouble[i]<< " ";
    }
    cout << endl;
    return 0;
}
