//Напишите программу, которая запрашивает количество чисел и затем сами числа. 
//Программа должна вывести на экран 
//в отдельных строках сначала максимальное, а затем минимальное из введенных чисел.

#include <stdio.h>
    int main() {
    int n = 0; //digit
    int num = 0; //number of digits
    int max;
    int min;
    int i;

    printf ("enter the number of digits\n");
    scanf("%d", &num);

    for (int i = 1; i <= num;  i++)
    {   
        printf("enter digit\n");
        scanf("%d",&n);     
        if (n > max) {
        max = n; 
        }
       
        else if (n < min) {
        min = n;
    }
    }
printf ("max ");  
printf ("%d\n", max);
printf ("min ");
printf ("%d\n", min);
    

return 0;
}

   
