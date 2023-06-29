// 1.  Напишите программу, которая запрашивает количество чисел и затем сами числа. Программа должна вывести на экран в отдельных строках сначала максимальное, а затем минимальное из введенных чисел.
#include <stdio.h>
int main(){
    int n = 1, numbers, max, min;
   printf("How many numbers:\n");
   scanf("%d", &n);
   for (int i = 0; i < n; i++){
        printf("Enter numbers:\n");
        scanf("%d", &numbers);
        if (numbers > max){
            max = numbers;
        } else {
            min = numbers;
        }
   }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}