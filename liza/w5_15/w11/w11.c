#include <stdio.h>
#include <locale.h>
int sum = 0;
void sum_of_elements(int number_1, int number_2){
    sum = number_1 + number_2;
    printf("�����: %d\n", sum);
}
int main(){
    setlocale(LC_ALL, "Russian");
    int number_1, number_2;
    printf("������� 2 ����� �����: ");
    scanf("%d %d", &number_1, &number_2);
    sum_of_elements(number_1, number_2);

    return 0;
}