#ifndef TASK_3
#define TASK_3

template<class T,int n>
void map(T* arr, T change(T value)) {
	for (int i = 0;i < n;i++) {
		arr[i] = change(arr[i]);
	}
}

#endif // !TASK_3
