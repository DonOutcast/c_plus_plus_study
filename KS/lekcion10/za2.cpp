#include <stdio.h>

void func(int a[], int b[], int c[])
{
  a[10];
  printf("Vvedite pervi massive\n");
  for(int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  b[10];
  printf("vvedite vtoroi massive\n");
  for(int i = 0; i < 10; i++) {
    scanf("%d", &b[i]);
  }
  c[10];
  printf("treti massive\n");
  for(int i = 0; i < 10; i++) {
    if(a[i] > b[i])  {
        c[i] = a[i];
        printf("%2d", c[i]);
    }
    else  {
        c[i] = b[i];
        printf("%2d", c[i]);
    }
  }
}

int main()
{
   int a[10];
   int b[10];
   int c[10];

   func(a,b,c);

    return 0;
}