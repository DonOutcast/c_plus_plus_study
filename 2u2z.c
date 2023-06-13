#include <stdio.h>
#include <locale.h>
int main () 
{
    setlocale(LC_ALL, "Russian");
int a;

wprintf(L"enter \n");
scanf("%d", &a);
if ( a<0)
{
  wprintf(L"число %d отрицательное",a);
}

  return 0;

}