#ifndef TASK1_H
#define TASK1_H

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <algorithm>
#include <utility>

using namespace std;

template<class T>
bool cmp(T a, T b) {
	return a < b;
}

bool cmp(char *a, char *b) {
	return strlen(a) < strlen(b);
}

template<class T>
void msort(T *arr, int n) {
	if (n == 1)return;
	T *left = new T[n / 2];
	for (int i = 0;i < n / 2;i++)left[i] = arr[i];
	T *right = new T[(n + 1) / 2];
	for (int i = n / 2;i < n;i++)right[i - n / 2] = arr[i];
	msort(left, n / 2);
	msort(right, (n + 1) / 2);
	int pl = 0, pr = 0;
	for (int i = 0;i < n;i++) {
		if (pl == n / 2) {
			arr[i] = right[pr];
			pr++;
		}
		else if (pr == (n + 1) / 2) {
			arr[i] = left[pl];
			pl++;
		}
		else {
			if (cmp(left[pl],right[pr])) {
				arr[i] = left[pl];
				pl++;
			}
			else {
				arr[i] = right[pr];
				pr++;
			}
		}
	}
}
#endif // !TASK1_H

