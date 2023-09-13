#include <stdio.h>
int sum(int n){
    printf("%d\n", n);
    if (n == 1){
        return 3;
    } else if (n > 1) {
        return sum(n - 1) * (n - 1);
    }
}
int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("%d\n", sum(n));
}