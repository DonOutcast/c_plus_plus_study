 //Создайте массив из 10 элементов, организуйте ввод элементов массива с клавиатуры, 
 // выведите на экран количество 
 //элементов, бо́льших среднего арифметического значения всех элементов массива.



#include <stdio.h>
int main() {

int n[10]={0};
int i = 0;
float sum = 0;
int count = 0;
float a = 0; //среднее арифметическое значение
   
    for(i = 0; i<10; i++) {
        printf("enter 10 digits:\n");
        scanf("%d",&n[i]);
    }
   
    for(i = 0; i<10; i++) {
        sum +=n[i];  
    }

 a = sum / 10;
   

    for(i = 0; i<10; i++) {
         if (n[i]>a){
        count++;
        }
    }

printf("average: %d\n", count);
//printf("%d\n", sum);
//printf("%f\n", a);
   
    return 0;
}