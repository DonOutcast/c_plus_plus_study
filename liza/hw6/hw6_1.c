#include <stdio.h>
int main() {
    int n, i;
    i = 0;
    scanf("%d", &n);
    if (n % 1 == 0){
        while (i < n){
            printf("programming\n");
            i ++;
        }
    }
    return 0;
}