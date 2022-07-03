#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<cstring>
#include<ctime>
/*
    Автор: Иванников Александр Владимирович, ЗИТ-21, №670, 
	Дата: 28.06.2022 методом Боуза-Нельсона
	Задание:Алгоритм простой сортировки "Пузырьком"
*/
using namespace std;
int main () {
	system ("chcp 1251");
	int Size;
	cout << "Enter the number of array elements:" << endl;
	cin >> Size;
	int array[Size];
	cout << "One dimensional array of " << Size << " random numbers:" << endl;
	for (int i = 0; i < Size; i++) {
		array[i] = rand()%100;
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	for (int i = 0; i < Size - 1; i++) {
		for (int j = 0; j < Size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "Simple sorting \"Bubble\:" << endl;
	for (int i = 0; i < Size; i++) {
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	system("pause");	
	return 0;
}
