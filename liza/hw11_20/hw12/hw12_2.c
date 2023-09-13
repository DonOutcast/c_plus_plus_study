#include <stdio.h>
int function_f(int n){
    if (n == 1){
        return 1;
    } else if (n % 2 == 0){
        return n + function_f(n - 1);
    } else if (n > 1 && n % 2 != 0) {
        return 2 * function_f(n - 2);
    }
}
int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("F(n) = %d\n", function_f(n));

    return 0;
}

