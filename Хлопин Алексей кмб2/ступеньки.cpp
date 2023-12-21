// Хлопин Алексей КМБ2

#include <iostream>
#include "time.h"
using namespace std;

void output(int **a, int n, int m)//вывод
{
	int hep = 4;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4);
			cout << *(a[i]+j) << " ";
		}
		cout << endl;
		m += (pow(-1, i+1)*hep);//для длины строки
		hep--;
		if (i == 4)
			m = 1;//для последней(я закономерности не нашел)   :(
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n=6, m=6;
	int row1[] = { 10, 20, 30, 40, 50, 60 };//строки массива
	int row2[] = { 15, 25 };
	int row3[] = { 97, 87, 77, 67, 57 };
	int row4[] = { 33, 66, 99 };
	int row5[] = { 84, 24, 64, 44 };
	int row6[] = { 101 };
	int *a[] = { row1, row2, row3, row4, row5, row6 };//создание массива
	output(a, n, m);
}
/*  10   20   30   40   50   60
  15   25
  97   87   77   67   57
  33   66   99
  84   24   64   44
 101*/