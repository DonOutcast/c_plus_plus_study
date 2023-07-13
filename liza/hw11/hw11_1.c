#include <stdio.h>
#include <locale.h>
int finding_the_maximum_value(int array[], int size){
    int max = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int array[10];
    printf("Элементы массива: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    int max = finding_the_maximum_value(array, 10);
    printf("Наибольший элемент массива: %d\n", max);

    return 0;
}