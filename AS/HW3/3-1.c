// Напиши программу, которая спрашивает “2+2=?”, если пользователь отвечает “4”-
// программа выводит на экран “Верно!”. Во всех остальных случаях выводит “Ошибка!”.

#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int a;
    wprintf (L"2+2=?");
    scanf ("%d", &a);
   if (a==4)

   {wprintf (L"Верно!");
  
    }
   else {wprintf (L"Ошибка!");}
   

    return 0;

}