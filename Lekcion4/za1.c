#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

     int a; 
     int b;
     int c;
     
     printf("¬ведите число\n");

     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);

     if(a == b && a < c)
     printf("yes");
     else if(b == c && b < c)
     printf("yes");
     else if(a == c && a < b)
     printf("yes");
     else if(a < b && a < c)
     printf("yes");
     else if(b < a && b < c)
     printf("yes");
     else if(c < a && c < b)
     printf("yes");
     else
     printf("no");

    return 0;
}