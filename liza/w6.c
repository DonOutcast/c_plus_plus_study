#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int num, sum = 0;
    while (num != 0){
        scanf("%d", &num);
        sum += num;
    }
    printf("����� ����� = %d\n", sum);
    return 0;
}