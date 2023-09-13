#include <stdio.h>
void function(int *number_1, int *number_2){
    int temp = *number_1;
    *number_1 = *number_2;
    *number_2 = temp;
}
int main(){
    int number_1, number_2;
    printf("number_1: ");
    scanf("%d", &number_1);
    printf("number_2: ");
    scanf("%d", &number_2);
    int *p_number_1 = NULL;
    int *p_number_2 = NULL;
    p_number_1 = &number_1;
    p_number_2 = &number_2;
    function(p_number_1, p_number_2);
    printf("%d %d\n", number_1, number_2);

    return 0;
}