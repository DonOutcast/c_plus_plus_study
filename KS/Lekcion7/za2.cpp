#include<stdio.h>

int main()  {

    int number;

    printf("vvedite chislo\n");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++ ) {

        printf("%d\n", i);
    }
    

    return 0;
}