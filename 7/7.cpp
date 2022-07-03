#include <iostream>
#include <cstdlib>
#include <cmath>
/*
    Разработать алгоритм и программу простого линейного поиска с циклом For. В качестве исходных данных использовать строку текста,
    из которой необходимо выделить слова. Затем слова упорядочить по алфавиту. Аргумент поиска – слово.
    Автор: Иванников Александр Владимирович, ЗИТ-21, №670, Вариант-7
	Дата: 27.06.2022
*/

using namespace std;

main (){
    setlocale(LC_ALL, "rus");
    int size;
    cout << "Введите количество строк:   ";
    cin >> size;
    string *a= new string [size];
   
    for (int i=0;i<size;i++){
        cin >> a[i];
    }
    
    for (int i=0;i<size;i++){
        for (int j=i;j>0&&a[j-1]>a[j];j--){
            swap(a[j-1], a[j]);
        }
    }
    for (int i=0;i<size;i++){
        cout << a[i] <<" ";
    }
    cout << endl;
    string queue;
    cout << "Введите слово:   ";
    cin >>queue;
    for (int i=0;i<size;i++){
        if (a[i]==queue) cout << queue << "  в строке  " << i+1;
    }
}


