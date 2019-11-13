//
// Created by mikhail on 25.09.2019.
//

#include "task1.h"


int main(){

    const size_t n = 6;
    int *curr = new int[n]{5, 3, 2 ,1, 10, 20};
    msort(curr, n);
    for(size_t i = 0; i < n; i++)
        cout << curr[i] << '\n';
    return 0;
}
