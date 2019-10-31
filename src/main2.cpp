#include "task2.h"

int main()
{
	cout << "start gen: " << endl;
	int* arr = createArr<int, 10>(gen);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "start gen: " << endl;
	double* arrD = createArr<double, 10>(gen);
	for (int i = 0; i < 10; i++)
	{
		cout << arrD[i] << ' ';
	}
	cout << endl;
	cout << "start gen: " << endl;
	char* arrS = createArr<char, 10>(gen);
	for (int i = 0; i < 10; i++)
	{
		cout << arrS[i] << ' ';
	}
	cout << endl;
	return 1;
}