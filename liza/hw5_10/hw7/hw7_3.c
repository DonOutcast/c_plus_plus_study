#include<stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int number_of_elephant, i;
    printf("���������� ������: ");
    scanf("%d", &number_of_elephant);
    for (i = 1; i <= number_of_elephant; i ++){
        printf("%d ����\n", i);
    }
    return 0;
}