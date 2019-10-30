#pragma once
#include <string.h>
//#include <malloc.h>
template <typename T>
void merge(T* arr, int n)
{
	for (int i = 1; i< n; i *= 2)
	{
		for (int j = 0; j < n - i; j += 2 * i)
		{
			int left = j;
			int right = (j + 2 * i > n) ? n : j + 2 * i;
			int mid = j + i;
			int it1 = 0;
			int it2 = 0;
			int* resultarr = new int[right - left];
			while ((left + it1 < mid) && (mid + it2 < right))
			{
				//if (arr[left + it1] < arr[mid + it2])
				if (MIN_MAX(arr[left + it1], arr[mid + it2]))
				{
					resultarr[it1 + it2] = arr[left + it1];
					it1 += 1;
				}
				else
				{
					resultarr[it1 + it2] = arr[mid + it2];
					it2 += 1;
				}

			}
			while (left + it1 < mid)
			{
				resultarr[it1 + it2] = arr[left + it1];
				it1 += 1;
			}
			while (mid + it2 < right)
			{
				resultarr[it1 + it2] = arr[mid + it2];
				it2 += 1;
			}
			for (int i = 0; i < it1 + it2; i++)
				arr[left + i] = resultarr[i];
		}
	}
}



template<typename T>
int MIN_MAX(T a, T b)
{
	return a < b;
}
template<> int MIN_MAX<char*>(char* a, char* b)
{
	return strlen(a) < strlen(b);
}
//
//void merge <char>(char* arr, int n)
//{
//	
//}