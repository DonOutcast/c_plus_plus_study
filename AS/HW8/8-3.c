//3.  Создайте массив из 11 элементов, организуйте ввод элементов массива с клавиатуры,
// выведите на экран все элементы массива в строку разделяя элементы одним пробелом. 
//Инвертируйте элементы массива относительно центра
// (например если было 0,1,2,3,4,5,6,7,8,9,10, должно стать 10,9,8,7,6,5,4,3,2,1,0). 
//Выведите на 
//экран в новой строке все элементы массива в строку разделяя элементы одним пробелом.

#include <stdio.h>
int main() {
int n[11]={0};
int i = 0;
   
    for(i = 0; i<11; i++) {
    printf("enter 11 digits:\n");
    scanf("%d",&n[i]);
    }
    printf("\n result: ");
    for(i = 0; i<11; i++) {
    printf("%d ", n[i]);
    }
    printf("\n invert: ");
    for(i = 10; i>=0; i--) {
     printf("%d ", n[i]);
    }   
  
       
    return 0;
}