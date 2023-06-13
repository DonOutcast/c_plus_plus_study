#include <stdio.h>
#include <locale.h>
int main () 
{
    setlocale(LC_ALL, "Russian");
int a;

wprintf(L"введите число \n");
scanf("%d", &a);
if (a%10==5)
{
  wprintf(L"введенное число %d заканчивается на 5",a);
}

  return 0;

}