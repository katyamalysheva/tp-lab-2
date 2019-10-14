//
// Created by Илья Соловьёв on 14/10/2019.
//

//
// Created by Илья Соловьёв on 14/10/2019.
//

#include "task1.h"
#include <iostream>

using namespace std;

int main() {
    int arr[10];
    arr[0] = 4;
    arr[1] = 2;
    arr[2] = 10;
    arr[3] = 3;
    arr[4] = 6;
    arr[5] = 8;
    arr[6] = 123;
    arr[7] = 8;
    arr[8] = 5;
    arr[9] = 47;
    msort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    char *a[4] = {(char *) "LOOOL", (char *) "LOL", (char *) "LOOOOOOOL", (char *) "LOOOOL"};
    msort(a, 4);


    return 0;
}