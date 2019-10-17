//
// Created by fiskirton on 10/16/19.
//

#include <iostream>
#include "task1.h"

using namespace std;

int main(){

    const int n = 6;
    double arr[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1.0};
    for (auto & i : arr)
        cout << i << " ";
    cout << endl;
    msort(arr, n);
    for (auto & i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}