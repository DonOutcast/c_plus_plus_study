#include <stdio.h>
int function_f(int n);
int function_g(int n);

int function_f(int n){
    if (n == 1){
        return 1;
    } else if (n > 1) {
        return 2 * function_g(n - 1) + 5 * n;
    }
}
int function_g(int n){
    if (n == 1){
        return 1;
    } else if (n > 1){
        return function_f(n - 1) + 2 * n;
    }
}
int main(){
    int n, m;
    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);
    printf("%d\n", function_f(n) + function_g(m));

    return 0;
}