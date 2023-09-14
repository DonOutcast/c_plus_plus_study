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
int finding_elements_larger_than_the_arithmetic_mean(int array[], int size, float arithmetic_mean){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (array[i] > arithmetic_mean){
            count++;
        }
    }
    return count;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int array[10];
    printf("Элементы массива: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    float arithmetic_mean = finding_the_arithmetic_mean(array, 10);
    int count = finding_elements_larger_than_the_arithmetic_mean(array, 10, arithmetic_mean);
    printf("Среднее арифметическое элементов  массива: %5.1f\n", arithmetic_mean);
    printf("Количество элементов массива, больших значения среднего арифметического всех элементов: %d\n", count);

    return 0;
}