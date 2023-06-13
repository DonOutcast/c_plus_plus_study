#include <stdio.h>
#include <locale.h>
int main () 
{
    setlocale(LC_ALL, "Russian");
int a;

wprintf(L"введите число \n");
scanf("%d", &a);
if (a%2==0)
{
  wprintf(L"число %d четное",a);
}

  return 0;

}