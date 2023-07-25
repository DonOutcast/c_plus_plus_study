#include <stdio.h>

void simple(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main() {
     
    int number = 0;
    int number_1 = 0;
    int *pointer = NULL;
    int *pointer_1 = NULL;
    printf("Enter numbers:");
    scanf("%d %d",&number, &number_1);
    
    pointer = &number;
    pointer_1 = &number_1;

    simple(pointer, pointer_1);
    printf("%d %d\n", number, number_1);
    

    return 0;
}