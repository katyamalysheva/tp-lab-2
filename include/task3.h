#pragma once
#include <iostream>

using namespace std;

template <typename T>
T change(T elem)
{
	return elem + 1;
}

template <typename T, size_t N>
void map(T (&arr)[N], T(*change)(T))
{
	
	for (int i = 0; i < N; i++)
	{
		arr[i] = change(arr[i]);
	}
}