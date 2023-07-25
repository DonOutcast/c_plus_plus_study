#include <stdio.h>
#include <stdlib.h>

void simple(int *x) {
    *x *=10;
}
int main() {
    int number;
    printf("vvedite chislo\n");
    scanf("%d", &number);
    int *pointer = NULL;
    pointer = &number;

    simple(&number);
    printf("%d", *pointer);
   

    return 0;
}