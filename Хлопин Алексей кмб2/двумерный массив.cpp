// Хлопин Алексей КМБ2 вариант 13

#include <iostream>
#include "time.h"
using namespace std;

void zap(int **a, int n, int m)//заполнение
{
	srand(time(NULL));
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 20 - 10;
		}
	}
}

void output(int **a, int n, int m)//вывод
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4);
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void null(int **a, int n, int m)//поиск нулей
{
	int hep=0;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if ((a[i][j] == 0)&&(flag))
			{
				cout << "В " << i << " строке есть 0" << endl;
				hep = i + 1;
				flag = false;
				break;
			}
		}
	}
	if (hep == 0)
		cout << "Нулей в массиве нема" << endl;//если нулей нет
}

void summ(int **a, int n, int m)//сумма отрицательных элементов
{
	int hep = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < 0)
			{
				hep += a[i][j];
			}
		}
	}
	cout << "Сумма отрицательных элементов равна: " << hep << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "Введите количество строк: " << endl;
	cin >> n;
	cout << "Введите количество столбцов: " << endl;
	cin >> m;
	int **a = new int *[n];//создание массива
	for (int i = 0; i < n; i++)
	{
		*(a + i) = new int[m];
	}
	zap(a, n, m);
	output(a, n, m);
	cout << endl;
	null(a, n, m);
	summ(a, n, m);
}
/*Введите количество строк:
10
Введите количество столбцов:
10
  -5    6    9    2   -1   -8    0    3    2   -1
   8   -5    4    7    8    1    0    9   -2    7
   0   -6   -6    2   -8   -6    1  -10   -9    1
   7    2   -5    2    3    8   -4    5   -3  -10
   7   -2  -10   -5   -5    2   -1   -5    8    9
  -8   -8   -2    5   -9   -6    7   -6    7   -2
   8   -1   -9    3    9    0    5    4   -3    0
   1   -7   -7    5    6    8   -9    2   -6   -1
   2    4    9   -1    6    0  -10    2    2   -9
   7    6  -10   -1   -2    1   -3    2    4    0

В 0 строке есть 0
Сумма отрицательных элементов равна: -237*/
/*Введите количество строк:
4
Введите количество столбцов:
4
  -3   -8    1    1
  -1   -3   -5   -3
  -5   -3   -1   -4
   0    2   -4    9

В 3 строке есть 0
Сумма отрицательных элементов равна: -40*/