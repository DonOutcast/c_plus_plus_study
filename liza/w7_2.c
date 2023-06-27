#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i <= n; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}