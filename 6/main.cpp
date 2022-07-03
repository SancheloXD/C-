#include <stdio.h> 
#include <conio.h> 
#include <locale.h>
#include <iostream> 
/*
    7.Составить программу, которая формирует матрицу из n*n случайных чисел. Определить произведение чисел, лежащих 
    на побочной диагонали матрицы. Значение n меняется в пределах от 5 до 10 тысяч.
    Автор: Иванников Александр Владимирович, ЗИТ-21, №670, Вариант-7
	Дата: 27.06.2022
*/

using namespace std;

void main()
{
	srand(time(NULL)); 
	int n = 0, sum1=1;
	cout << "Введите количество элементов массива: " <<endl;
	cin >> n; 
	int **a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int [n]; 
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (10000 - 5000 ) + 5000;
			if (i>n-1-j){
			    sum1*=a[i][j];
			}
			cout << a[i][j] << " ";
		}
		cout << endl; 
	}
	cout << "Произведение чисел, лежащих на побочной диагонали матрицы:" << sum1;
	
	return 0;
}


