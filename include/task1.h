#ifndef TASK1_h
#define TASK1_h

#include <string.h>
#include <vector>
#include <malloc.h>

template <class T>
bool compare(T first, T second)
{
	return first > second;
}

template <>
bool compare(char* first, char* second)
{
	if (strlen(first) == strlen(second)
	{
		int ind = 0;
		while (ind < strlen(first) && first[i] == second[ind])
		{
			ind++;
		}
		if (ind == strlen(first) return false;
		return first[ind] > second[ind];
	}
	return strlen(first) > strlen(second);
}

template <class T>
void msort(T* arr, int size)
{
	if (size <= 1)
	{
		return;
	}
	T* left = (T*)malloc(sizeof(T) * (size / 2));
	T* right = (T*)malloc(sizeof(T) * ((size + 1) / 2));
	for (int i = 0; i < (size / 2); i++)
	{
		left[i] = arr[i];
	}
	for (int i = (size / 2); i < size; i++)
	{
		right[i - (size / 2)] = arr[i];
	}
	msort(left, (size / 2));
	msort(right, ((size + 1) / 2));
	int ileft = 0;
	int iright = 0;
	for (int i = 0; i < size; i++)
	{
		if (iright >= ((size + 1) / 2))
		{
			arr[i] = left[ileft];
			ileft++;
			continue;
		}
		if (ileft >= (size / 2) || compare(left[ileft], right[iright]))
		{
			arr[i] = right[iright];
			iright++;
		}
		else
		{
			arr[i] = left[ileft];
			ileft++;
		}
	}
}

#endif