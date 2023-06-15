#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int a,b;
    wprintf (L"введите число А:");
    scanf ("%d", &a);
       wprintf (L"введите число В:");
    scanf ("%d", &b);
   if (a%b == 0)

   {wprintf (L"Число ");
   printf("%d",a);
   wprintf (L" делится на ");
   printf("%d",b);
     }
   else {printf ("");}
 
   

    return 0;

}