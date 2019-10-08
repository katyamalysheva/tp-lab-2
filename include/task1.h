#ifndef TASK1_H
#define TASK1_H

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <algorithm>
#include <utility>

using namespace std;

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
			if (left[pl] <= right[pr]) {
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

template<>
void msort(char** arr, int n) {
	if (n == 1)return;
	char** left = new char*[n / 2];
	for (int i = 0;i < n / 2;i++) {
		left[i] = new char[strlen(arr[i])+1];
		strcpy(left[i], arr[i]);
	}
	char** right = new char*[(n + 1) / 2];
	for (int i = n / 2;i < n;i++) {
		right[i - n / 2] = new char[strlen(arr[i]) + 1];
		strcpy(right[i - n / 2], arr[i]);
	}
	msort(left, n / 2);
	msort(right, (n + 1) / 2);
	int pl = 0, pr = 0;
	for (int i = 0;i < n;i++) {
		if (pl == n / 2) {
			//strcpy(arr[i], right[pr]);
			//swap(arr[i], right[pr]);
			arr[i] = right[pr];
			pr++;
		}
		else if (pr == (n + 1) / 2) {
			//strcpy(arr[i], left[pl]);
			//swap(arr[i], left[pl]);
			arr[i] = left[pl];
			pl++;
		}
		else {
			if (strlen(left[pl]) < strlen(right[pr])) {
				//strcpy(arr[i], left[pl]);
				//swap(arr[i], left[pl]);
				arr[i] = left[pl];
				pl++;
			}
			else {
				//strcpy(arr[i], right[pr]);
				//swap(arr[i], right[pr]);
				arr[i] = right[pr];
				pr++;
			}
		}
	}
}
#endif // !TASK1_H

