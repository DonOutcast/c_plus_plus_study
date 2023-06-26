#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

     int a;
     int b;
     
     printf("vasha summa zakaza?\n");
     scanf("%d", &a);
     if(a > 1000) {
        printf("dostavka besplatno\n");
     }
     else {
        printf("1.samovivoz, 2.dostavka kurierom\n");
        scanf("%d", &b);
        if(b == 1){
            a = a + 100;
            printf("vibran samovivoz %d\n ", a);
        }
        else if( b == 2) {
        a = a + 300;
        printf("vibrana dostavka kurierom %d\n", a);
        }
     }


    return 0;
}