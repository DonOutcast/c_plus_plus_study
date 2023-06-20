// Напиши программу, которая запрашивает 3 числа (числа вводятся  
//в одну строку через пробел), определяет наибольшее и выводит его на экран.

#include <locale.h>
#include <stdio.h>

int main() {



int a, b, c;
    
    printf ("enter three digets:");
    scanf ("%d%d%d", &a, &b, &c);
    if ((a>b)&&(a>c)) { 
    printf ("%d", a); } 
    if ((c>b)&&(c>a)) {
    printf ("%d", c); }
    if ((b>c)&&(b>a))
    {
    printf ("%d", b); }


    return 0;
}