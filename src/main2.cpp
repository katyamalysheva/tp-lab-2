#include <iostream>
#include "task2.h"

using namespace std;

template <class T> T gen() 
{
	return 0;
}

template <> char* gen() 
{
	int a = 1;
	char *string = new char[a + 1];
	string[0] = 'a';
	string[1] = '\0';
	return string;
}

int main()
{
	const int N = 10;
	int *arr;

	arr = createArr <int, N> (gen);
	for (int i = 0; i < N; i++) 
		cout << arr[i] << ' ';

	cout << endl;

	char** a = createArr <char*, N> (gen);
	for (int i = 0; i < N; i++)
		cout << a[i] << ' ';

	system("pause");
	return 0;
}

