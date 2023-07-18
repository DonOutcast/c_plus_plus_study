#include <stdio.h>
int function_f (int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    else if(n > 2) {
        return function_f(n - 2)*n;
    }
 

}
int main() {
    int number=0;
    printf("Enter number:");
    scanf("%d", &number);
    printf("Result=%d\n", function_f(number));

    return 0;
}