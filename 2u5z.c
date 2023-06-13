#include <stdio.h>
#include <locale.h>
int main () 
{
    setlocale(LC_ALL, "Russian");
int a;

wprintf(L"введите число \n");
scanf("%d", &a);
if (a%2==0, a>>0)
{
  wprintf(L"введенное число %d подходит",a);
}

  return 0;

}