//  Напишите программу, которая запрашивает n-количество чисел, затем запрашивает 
//ввод n-натуральных чисел.
//Программа должна вывести на экран в отдельных строках количество и сумму чётных 
//введенных чисел, оканчивающихся на 4.

#include <stdio.h>
    int main() {
    int n = 0;
    int num = 0; //number of digits
    int count=0;
    int sum=0;


    printf ("enter the number of digits\n");
    scanf("%d", &num);

    for (int i = 1; i <= num;  i++)
    {   
        printf("enter digit\n");
        scanf("%d",&n);     
        if (n%10 == 4) {
        sum+=n;
        count++;
        }
        
    }
printf ("sum: ");    
printf ("%d\n", sum);
printf ("count: ");  
printf ("%d\n", count);



return 0;
}