#include <stdio.h>
char simple(int n) {
    for (int i = 2; i <=(n/2); i++) {
        if ((n % i) == 0) {
        return '-';
        }
    }
    return '+';
}
int main() {
    int n=0;
    printf("Enter n>1:");
    scanf("%d",&n);
    printf("%c\n", simple(n));
    return 0;
}