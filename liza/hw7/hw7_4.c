#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int amount_of_numbers, number, i, count = 0, even_sum = 0;
    printf("���������� �����: ");
    scanf("%d", &amount_of_numbers);
    printf("%d ����������� �����: \n", amount_of_numbers);
    for (i = 1; i <= amount_of_numbers; i ++){
        scanf("%d", &number);
        if (number % 10 == 4){
            count ++;
            even_sum += number;
        }
    }
    printf("���������� ������ �����, �������������� �� 4: %d\n", count);
    printf("����� ������ �����, �������������� �� 4: %d\n", even_sum);
    return 0;
}
