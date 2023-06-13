#include <stdio.h>
#include <locale.h>
int main () 
{
    setlocale(LC_ALL, "Russian");
int a;

wprintf(L"введите число \n");
scanf("%d", &a);
if (a>=10)
{
  wprintf(L"ты победил",a);
}

  return 0;

}