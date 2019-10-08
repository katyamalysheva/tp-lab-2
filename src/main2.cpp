#include <iostream>
#include "task2.h"

using namespace std;

template<class t>
T gen1() {
	return 1;
}

int main() {
	const size_t n = 5;
	char* arr;
	arr = createArr<char, n>(gen1);
	for (int i = 0;i < n;i++)cout << arr[i] << " ";
	cout << '\n';
}