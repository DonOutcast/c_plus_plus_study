#include <stdio.h>
#include <locale.h>
float finding_the_arithmetic_mean(int array[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    float arithmetic_mean = (float)sum / size;
    return arithmetic_mean;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int array[10];
    printf("Ёлементы массива: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    float arithmetic_mean = finding_the_arithmetic_mean(array, 10);
    printf("—реднее арифметическое элементов  массива: %5.1f\n", arithmetic_mean);

    return 0;
}