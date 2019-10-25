#include <iostream>
#include "task3.h"

using namespace std;

template <typename T> T change(T num)
{
	return (num + 1);
}

template <> char* change(char* str)
{
	for (int i = 0; i < strlen(str); i++)
		str[i] = str[i] + 1;
	return str;
}

int main()
{
	const int N = 6;
	int arr1[N] = { 1, 2, 3, 4, 5, 6 };
	char arr2[N] = { '1', '2', '3', '4', '5', '6' };

	map <int, N> (arr1, change);
	for (int i = 0; i < N; i++)
		cout << arr1[i] << ' ';

	cout << endl;
	
	map<char, N>(arr2, change);
	for (int i = 0; i < N; i++)
		cout << arr2[i] << ' ';

	system("pause");
	return 0;
}