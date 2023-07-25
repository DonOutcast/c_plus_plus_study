#include <stdio.h>
void function(int *number){
    *number *= 10;
}
int main(){
    int number;
    printf("Number: ");
    scanf("%d", &number);
    int *pointer = NULL;
    pointer = &number;
    function(pointer);
    printf("%d\n", number);

    return 0;

}