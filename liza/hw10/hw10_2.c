#include <stdio.h>
#include <locale.h>
void input_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void compare_arrays(int array_1[], int array_2[], int array_3[], int size) {
    for (int i = 0; i < size; i++) {
        if (array_1[i] > array_2[i]) {
            array_3[i] = array_1[i];
        } else {
            array_3[i] = array_2[i];
        }
    }
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Russian");
    int array_1[10], array_2[10], array_3[10];
    printf("Ёлементы первого массива:\n");
    input_array(array_1, 10);
    printf("Ёлементы второго массива:\n");
    input_array(array_2, 10);
    compare_arrays(array_1, array_2, array_3, 10);
    printf("Ёлементы третьего массива:\n");
    print_array(array_3, 10);

    return 0;
}


