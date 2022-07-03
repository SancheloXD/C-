#include <stdio.h> 
#include <conio.h> 
#include <locale.h> 
/*
    7.Перевода целого числа, введенного с клавиатуры, в двоичную систему счисления
    Автор: Иванников Александр Владимирович, ЗИТ-21, №670, Вариант-7
	Дата: 29.06.2022
*/
void dec2bin(unsigned long int); 
int main (void) { 
    unsigned long int n; 
	setlocale(LC_ALL, "Russian");  
    printf("Enter an integer decimal number: "); 
    if (scanf("%ul", &n) == 1){
        printf("Binary equivalent: "); 
        dec2bin(n); 
    } 
    getch(); 
    return 0; 
} 
void dec2bin(unsigned long int n) { 
    int r; r = n % 2; if (n >= 2 ) 
    dec2bin(n/2); 
    printf("%d", r); 
    return;   
}