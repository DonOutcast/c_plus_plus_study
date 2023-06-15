#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int a;
    wprintf (L"введите число:");
    scanf ("%d", &a);
   if (a>>0 && a%2==0)

   {wprintf (L"Число ");
   printf("%d",a);
   wprintf (L" подходит");
     }
   else {printf ("");}
   

    return 0;

}