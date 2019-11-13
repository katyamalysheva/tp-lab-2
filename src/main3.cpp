#include <iostream>
#include "task3.h"

template<class T>
T change(T element)
{
	return ++element;
}

int main()
{
	const signed n = 5;
	int arr[5] = { 1,2,3,4,5 };
	map<int, n>(arr, change);
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	return 0;
}