#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int a[11], i;
    for (i = 0; i < 11; i++){
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < 6 ; i++){
        int number = a[i];
        a[i] = a[10 - i];
        a[10 - i] = number;
    }
    for (i = 0; i < 11; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
