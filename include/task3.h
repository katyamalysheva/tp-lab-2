#pragma once
#include <cstring>
template <typename T, int N>
void map( T*mas, T(*change)(T)) 
{
	
	for (int i = 0; i < N; i++) {
		mas[i] = change(mas[i]);
	
	}
	
}
