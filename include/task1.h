#pragma once
using namespace std;
template <typename T>
bool cmp(T a, T b)
{
	return a < b;
}

template <>
bool cmp(char* a, char* b)
{
	return strlen(a) < strlen(b);
}


template<typename T>
void msort(T* mas, int N) {
	if (N <= 1) return;
	int NL = N / 2;//размер разбиени€ слева
	int NR = N - NL;//размер разбиени€ справа

	msort(mas, NL); //вызов сортировки левого подмассива 
	msort(mas + NL, NR);// правого 

	T* resultmas = new T[N];
	int i = 0, j = 0, k = 0;
	while ((i < NL) && (j < NR)) {//сли€ние отсортированных подмассивов

		if (cmp(mas[i], mas[NL + j])) {

			resultmas[k] = mas[i];


			i++;
			k++;
		}
		else {
			resultmas[k] = mas[NL + j];
			j++;
			k++;

		}
	}
	while (i < NL) {
		resultmas[k] = mas[i];
		i++;
		k++;
	}
	while (j < NR) {
		resultmas[k] = mas[NL + j];
		j++;
		k++;
	}
	for (i = 0; i < N; i++) {
		mas[i] = resultmas[i];
	}

	delete[] resultmas;


}