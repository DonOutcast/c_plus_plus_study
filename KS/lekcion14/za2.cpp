#include <stdio.h>
#include <stdlib.h>

void simple(int *x, int*y) {
    int temp =*x;
    *x = *y;
    *y = temp;
}
int main() {
    int number1;
    int number2;
    printf("vvedite pervoe and vtoroe chislo\n");
    scanf("%d", &number1);
    scanf("%d", &number2);

    int *pointer1 = &number1;
    int *pointer2 = &number2;

    pointer1 = &number1;
    pointer2 = &number2;
    
    simple(pointer1, pointer2);
    printf("novie chisla\n");
    printf("%d\n%d\n", number1, number2);

  

    return 0;
}