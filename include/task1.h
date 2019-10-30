#pragma once
//#include <malloc.h>
template <typename T>
void merge(T* arr, int n)
{
	int mid = n / 2;
	if (n % 2 == 1)
		mid++;
	int h = 1;
	T* doparr = new T[n * sizeof(T)];
	int step;
	while (h < n)
	{
		step = h;
		int i1 = 0;   
		int i2 = mid; 
		int j = 0;   
		while (step <= mid)
		{
			while ((i1 < step) && (i2 < n) && (i2 < (mid + step)))
			{ 
				if (arr[i1] < arr[i2])
				{
					doparr[j] = arr[i1];
					i1++; j++;
				}
				else {
					doparr[j] = arr[i2];
					i2++; j++;
				}
			}
			while (i1 < step)
			{ 
				doparr[j] = arr[i1];
				i1++; j++;
			}
			while ((i2 < (mid + step)) && (i2 < n))
			{ 
				doparr[j] = arr[i2];
				i2++; j++;
			}
			step = step + h; 
		}
		h = h * 2;
		for (i1 = 0; i1 < n; i1++)
			arr[i1] = doparr[i1];
	}
}