#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Russian");
  wprintf(L"Уроки сделаны?\n");
  char a;
  scanf("%c", &a);
  if ( a == 'y')
  {
  wprintf(L"Молодец!\n");
  }
  else
  {
  printf ("\n");  
  }
  return 0;

  }
  


