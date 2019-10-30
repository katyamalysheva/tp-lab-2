#include "task2.h"

int main()
{
	cout << "start gen: " << endl;
	int(*generate)() = gen;
	int* arrint = createArr(10, generate);
	for (int i = 0; i < 10; i++)
	{
		cout << arrint[i] << ' ';
	}
	cout << endl;
	cout << "start gen: " << endl;
	double(*generateD)() = gen;
	double* arrD = createArr(10, generateD);
	for (int i = 0; i < 10; i++)
	{
		cout << arrD[i] << ' ';
	}
	cout << endl;
	cout << "start gen: " << endl;
	char(*generateS)() = gen;
	char* arrS = createArr(10, generateS);
	for (int i = 0; i < 10; i++)
	{
		cout << arrS[i] << ' ';
	}
	cout << endl;
	return 1;
}