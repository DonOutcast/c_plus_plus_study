#include<stdio.h>

int main()  {

    int colnumber;
    int number;
    int max ;
    int min ;

    printf("Vvedite kolichestvo chisel\n");

    scanf("%d", &colnumber);
    printf("Vvedite  chisla\n");

    for(int i = 0; i < colnumber; i++)  {
       
       scanf("%d", &number);

       if( number > max) {
        max = number;
       }
       if( number < min) {
        min = number;          
       }
    }
    printf("\n");
    printf("%d minimum \n", min);
    printf("%d maksimum \n", max);

    return 0;
}