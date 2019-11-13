#include <iostream>
#include "task1.h"

int main()
{
	double d[] = { 1.1, 5.5, 2.2, 7.7, 6.6 };
	int i[] = { 1, 5, 2, 7, 6 };
	char** c = (char**)malloc(sizeof(char*) * 5);
	c[0] = (char*)malloc(sizeof(char) * 1);
	c[1] = (char*)malloc(sizeof(char) * 5);
	c[2] = (char*)malloc(sizeof(char) * 2);
	c[3] = (char*)malloc(sizeof(char) * 7);
	c[4] = (char*)malloc(sizeof(char) * 6);
	c[0][0] = c[1][4] = c[2][1] = c[3][6] = c[4][5] = 0;
	c[1][0] = c[1][1] = c[1][2] = c[1][3] = '5';
	c[2][0] = '2';
	c[3][0] = c[3][1] = c[3][2] = c[3][3] = c[3][4] = c[3][5] = '7';
	c[4][0] = c[4][1] = c[4][2] = c[4][3] = c[4][4] = '6';
	msort(d, 5);
	msort(i, 5);
	msort(c, 5);
	for (int j = 0; j < 5; j++)
	{
		std::cout << d[j] << ' ';
	}
	std::cout << "\n";
	for (int j = 0; j < 5; j++)
	{
		std::cout << i[j] << ' ';
	}
	std::cout << "\n";
	for (int j = 0; j < 5; j++)
	{
		std::cout << c[j] << ' ';
	}
	std::cout << '\n';
	return 0;
}