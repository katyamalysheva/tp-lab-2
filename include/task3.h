#ifndef TASK3_H
#define TASK3_H

template <class T, signed size>
void map(T* array, T(*change)(T element)) 
{
	for (int i = 0; i < size; i++)
	{
		array[i] = change(array[i]);
	}
}

#endif