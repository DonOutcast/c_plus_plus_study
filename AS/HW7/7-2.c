//2.  Напишите программу, которая запрашивает ввод n, затем выводит на экран в
// столбик все простые числа от 1 до n (включительно).

#include <stdio.h>
    

int main()
{   int n = 0;
   
    printf("enter digit n:\n");
    scanf("%d", &n);
    printf ("prime numbers:\n");
   
    for( int i = 2; i <= n; i++)
    {       
            if(i%2!=0 || i==2 ) {
            printf("%d\n",i);
            }
    }
    return 0;

}