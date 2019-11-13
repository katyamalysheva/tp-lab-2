#pragma once
#include <iostream>
#include<malloc.h>
#include <random>
#include <time.h>

using namespace std;


template <typename T>
T mygen()
{

	return (T)(rand() % 201 -100);
}
template<>
char mygen()
{
	return (char)(rand() % (122 - 65) + 65); //65 -- 122
	
}

template <typename T, size_t N>
T* createArr(T(*gen)())
{
	srand(time(NULL));
	T* arr = new T[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = gen();
	}
	return arr;
}