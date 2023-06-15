#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int a;
    wprintf (L"введите число:");
    scanf ("%d", &a);
   if (a%10==5)

   {wprintf (L"Число ");
   printf("%d\n",a);
   wprintf (L" заканчивается на 5");
     }
   else {printf ("");}
   

    return 0;
}