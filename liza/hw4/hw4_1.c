#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if ((A % 2 == 0 || B % 2 == 0 || C % 2 == 0) && (A % 2 != 0 || B  % 2 != 0 || C % 2 !=0)){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}