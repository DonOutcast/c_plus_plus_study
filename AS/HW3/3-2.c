// Напиши программу, которая запрашивает число и определяет, заканчивается ли оно на 5.
// Если введенное число заканчивается на 5- программа выводит “+”, иначе выводит “-”.


#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int a;
    wprintf (L"введите число:");
    scanf ("%d", &a);
   if (a%10==5)

   {wprintf (L"+");
  
     }
   else {wprintf (L"-");}
   

    return 0;

}