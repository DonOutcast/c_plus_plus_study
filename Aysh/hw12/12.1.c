#include <stdio.h>
int function_f (int n);
int function_g (int n);

int function_f (int n) {
    if (n == 1) {
        return 1;
    }
    else if (n > 1) {
        return 2 * function_g(n-1) + 5*n;
    }

}
int function_g(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n > 1) {
        return function_f(n-1) + 2*n;
    }

}
int main() {
    int result=0;
    int number1=0;
    int number2=0;
    printf("Enter number 1:");
    scanf("%d", &number1);
    printf("Enter number 2:");
    scanf("%d", &number2);
    result=function_f(number1)+function_g(number2);
    printf("Result=%d\n", result);
    return 0;
}