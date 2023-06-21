#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int a;
    wprintf (L"введите количество очков:");
    scanf ("%d", &a);
   if (a>=10)

   {wprintf (L"Ты победил!");
 
   
     }
   else {printf ("");}
   

    return 0;

}