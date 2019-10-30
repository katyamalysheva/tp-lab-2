#include "task3.h"

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	int (*ch)(int) = change;
	map<int, 10>(arr, ch);
		for (int i = 0; i < 10; i++)
	{
		cout <<arr[i] << ' ';
	}
	return 1;
}