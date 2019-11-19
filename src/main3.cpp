#include "task3.h"
#include <iostream>

using namespace std;

template<typename T>
T change (T value)
{
	return value+1 ;

}


int main() {
	const size_t n = 5;
	char arr[n] = { '1','2','3','4','5' };
	map<char, n>(arr, change);
	for (size_t i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}