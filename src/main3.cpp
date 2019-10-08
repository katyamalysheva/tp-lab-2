#include <iostream>
#include "task3.h"

using namespace std;
template<class T>

T change1(T val)
{
	return val + 1;
}

int main() {
	const size_t n = 5;
	double arr[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr, change1);
	for (int i = 0;i < n;i++)cout << arr[i] << " ";
	cout << '\n';
}