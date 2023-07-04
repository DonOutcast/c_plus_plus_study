#include <stdio.h>
#include <math.h>
int main() {
    int a[20], i, number, sum = 0, sum_1 = 0;
    for (i = 0; i < 20; i++){
        number = pow(i, 3);
        sum += number;
        if (number % 2 == 0){
            number *= 2;
        }
        sum_1 += number;
    }
    printf("%d\n", sum - sum_1);
    return 0;
}