// Напишите программу, которая запрашивает ввод десяти целых значений и записывает их в массив.
// Напишите функцию, которая будет увеличивать каждый элемент массива в 2 раза,
// функция в качестве параметров получает количество элементов в массиве и указатель на массив,
// организуйте увеличение значений элементов массива в 2 раза через указатель внутри функции.
// Выведите массив на экран в одну строку через один пробел.
#include <stdio.h>
void multiplication(int *array, int size){
    for (int i = 0; i < size; i++)
    {
        *(array+i) *= 2;
    }
    
}

int main(){
    int size = 0;
    printf("input size array?\n");
    scanf("%d",&size);
    int array[size-1];
    for (int i = 0; i < size; i++)
    {
        printf("input array[%d]",i);
        scanf("%d",&array[i]);
    }
    int *pointer = NULL;
    pointer = &array[size-1];
    multiplication(pointer,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    


    
    return 0;
}