#ifndef task1H
#define task1H

#include <string>

template<typename T> void msort(T* arr, int n)
{
	mergeSort(arr, 0, n - 1);
}

template <typename T> void mergeSort(T* array, int left, int right)
{
	if (left >= right)
		return;

	if (left < right)
	{
		int mid = left + (right - left) / 2;

		mergeSort(array, left, mid);
		mergeSort(array, mid + 1, right);

		merge(array, left, mid, right);
	}
}

template <typename T> void merge(T* array, int left, int mid, int right)//for num
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	T* A = new T[n1];
	T* B = new T[n2];
	//copy elements to temporary arrays
	for (i = 0; i < n1; i++)
		A[i] = array[left + i];
	for (i = 0; i < n2; i++)
		B[i] = array[mid + 1 + i];

	i = 0;
	j = 0; 
	k = left; 
	//sort two parts and merge it
	while (i < n1 && j < n2)
	{
		if (A[i] <= B[j])
		{
			array[k] = A[i];
			i++;
		}
		else
		{
			array[k] = B[j];
			j++;
		}
		k++;
	}
	//if there are elements in L
	while (i < n1)
	{
		array[k] = A[i];
		i++;
		k++;
	}
	//if there are elements in R
	while (j < n2)
	{
		array[k] = B[j];
		j++;
		k++;
	}
	
	delete[]B;
	delete[]A;
}

template <> void merge(char** array, int left, int mid, int right) //for char
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	char** A = new char*[n1];
	char** B = new char*[n2];

	for (i = 0; i < n1; i++)
		A[i] = array[left + i];
	for (j = 0; j < n2; j++)
		B[j] = array[mid + 1 + j];

	i = 0;
	j = 0;
	k = left; 
	while (i < n1 && j < n2)
	{
		if (strlen(A[i]) < strlen(B[j]))
		{
			array[k] = A[i];
			i++;
		}
		else
		{
			array[k] = B[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		array[k] = A[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		array[k] = B[j];
		j++;
		k++;
	}
	delete[]B;
	delete[]A;
}
#endif