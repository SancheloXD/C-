#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<cstring>
#include<ctime>
/*
    Автор: Иванников Александр Владимирович, ЗИТ-21, №670
	Дата: 28.06.2022
	Задание:Алгоритм методом вставки
*/
using namespace std;
void Print (int *a, int n)
{
    for (int i = 0; i < n; i++)             
        cout << a[i] << " ";        
    cout << "\n";    
}
void InsertSort (int* a, int n)
{ 
    int tmp;
    for (int i = 1, j; i < n; ++i) 
    {
        tmp=a[i]; 
        for (j = i - 1; j >= 0 && a[j] > tmp; --j) 
            a[j+1]=a[j];    
            a[j+1]=tmp; 
        Print(a,n);
    } 
}  
int main()
{
    int n;
    cout << "Enter the number: "; cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)        
        a[i]= rand() % 5000;   
    InsertSort(a,n); 
    delete[]a; 
system("pause");
return 0;
}