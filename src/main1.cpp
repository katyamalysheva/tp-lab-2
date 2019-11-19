#include <iostream>
#include <cstring>
using namespace std;
#include "task1.h"


int main() {
	int numbers[] = { 49, 83, 5, 34, 11, 57, 17, 44, 57, 66, 22, 47, 9, 93, 12 };
	char* words[] = { (char*)"kek", (char*)"five", (char*)"neverevernever", (char*)"aye", (char*)"babe" };
	double doubles[] = { 6.0, 5.0, 2.4, 2.5, 1.1, -1 };
	int N1 = 15, N2 = 5, N3 = 6;

	msort(numbers, N1);
	for (int i = 0; i < N1; i++)
		cout << numbers[i] << " ";
	cout << endl;

	msort(words, N2);
		for (int i = 0; i < N2; i++)
		cout << words[i] << " ";
	cout << endl;

	msort(doubles, N3);
	for (int i = 0; i < N3; i++)
		cout << doubles[i] << " ";
	cout << endl;
}