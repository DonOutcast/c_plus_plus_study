#include <stdio.h>
#include <locale.h>
int finding_the_minimum_value(int array[], int size){
    int min = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int array[10];
    printf("�������� �������: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    int min = finding_the_minimum_value(array, 10);
    printf("���������� ������� �������: %d", min);

    return 0;
}
