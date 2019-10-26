#include "task1.h"
#include <iostream>

using namespace std; 

int main()
{
	char* arr1[7] = { (char*)"please", (char*)"give", (char*)"me", (char*)"a", (char*)"rating", (char*)"of", (char*)"ten" };
	msort(arr1, 7);

	for (int i = 0; i < 7; i++)
	{
		cout << arr1[i] << endl;
	}
	cout << endl;


	int arr2[10] = {2, 8, 3, 4, 7, 6, 0, 5, 1, 9};
	msort(arr2, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}