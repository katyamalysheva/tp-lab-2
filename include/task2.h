#ifndef TASK2_h
#define TASK2_h

#include <string.h>
#include <vector>
#include <malloc.h>

template<class T, signed n>
T* createArr(T(*gen)())
{
	T* arr = new T[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = gen();
	}
	return arr;
}

#endif
