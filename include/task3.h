#ifndef task3H
#define task3H

template <typename T, int N> void map(T *arr, T(*change)(T))
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = change(arr[i]);
	}
}
#endif