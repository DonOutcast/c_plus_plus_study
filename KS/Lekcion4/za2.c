#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

     int a;
     int b;
      printf("¬ведите количество бочек\n ");
     while(b+1) {
       
        scanf("%d", &a);
        if(a < 1001) {
            int d = (a / 10) % 10;
            int e = a % 10;

            if(d == 1 || e > 4 || e == 0)
            printf("Bochek\n");
            else if(d ==1 || e < 5 && e > 1 || e == 0)
            printf("Bochki\n");
            else
            printf("Bochka\n");
        }
        else
        printf("больше 1000 нельз€");
     }
    return 0;
}