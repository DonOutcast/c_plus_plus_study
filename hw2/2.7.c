#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a,b,c;//длины трех сторон треугольника
    wprintf(L"Введите длину первого отрезка:");
    scanf("%d", &a);
    wprintf(L"Введите длину второго отрезка:");
    scanf("%d", &b);
    wprintf(L"Введите длину третьего отрезка:");
    scanf("%d", &c);
    if (a<b+c&&b<a+b&&c<a+b) 
    {
        wprintf(L"Треугольник существует!\n"); 
        
        }
        
      
       return 0;
    
}