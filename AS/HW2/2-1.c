#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    char a;
    wprintf (L"Уроки сделаны?:");
    scanf ("%c", &a);
   if (a=='y')
   {wprintf (L"Молодец!\n");

   }
   else {printf ("");}
   

    return 0;
}