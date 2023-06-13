#include <locale.h>
#include <stdio.h>


int main() {
    setlocale(LC_ALL, "Rus");

    int a,b,c;
    wprintf (L"введите сторону треугольника А:");
    scanf ("%d", &a);
    wprintf (L"введите сторону треугольника B:");
    scanf ("%d", &b);
    wprintf (L"введите сторону треугольника C:");
    scanf ("%d", &c);
   if ((a+c>b)&&(a+b>c)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))

   {wprintf (L"Треугольник существует.");
   
   }
 
   

    return 0;

}