#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#include <random>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 61 - 30;
		cout << a[i] << " ";
	}
	cout << endl;
	merge(a, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}