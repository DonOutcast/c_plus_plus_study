#include <stdio.h>
int simple (int *x) {
*x*=10;
return *x;
}
int main() {
    int number=0;
    int *pointer=NULL;
    printf("Enter number:");
    scanf("%d", &number);
    pointer=&number;
    simple(pointer);
    printf("%d\n",number);
    return 0;
}