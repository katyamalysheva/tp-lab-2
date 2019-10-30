#pragma once
#include <iostream>

using namespace std;

template <typename T>
T change(T elem)
{
	return elem + 5;
}

template <size_t N, typename T>
void map(T (&arr)[N], T(*change)(T))
{
	
	for (int i = 0; i < N; i++)
	{
		arr[i] = change(arr[i]);
	}
}