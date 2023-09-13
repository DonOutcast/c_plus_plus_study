#include <stdio.h>
int function_f(int n){
    if (n == 1 || n == 2){
        return 1;
    } else if (n > 2) {
        return function_f(n - 2) * n;
    }
}
int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, function_f(n));

    return 0;
}