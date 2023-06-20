#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

     int a;
     int b;
     int c;
      printf("press enter three namber\n ");
     while(b+1) {
       
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if((a < c && b < c) || (a == b && a < c))
        printf("%d", c);
        if((a < b && c < b) || (a == c && a < c))
        printf("%d", b);
        if((c < a && b < c) || (c == b && c < a))
         printf("%d", a);
     }
    return 0;
}