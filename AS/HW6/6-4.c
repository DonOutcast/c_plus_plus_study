//Напишите программу, которая выводит на экран в столбик все делители введенного числа.


#include <stdio.h>


int main() {
    int n=0 ; 
    int del=1; 
    
    printf("enter digit\n");
    scanf("%d", &n);
    
    do
    { if (n%del==0){
        printf ("%d \n", del);
       }
       del++;
    } while (n>=del);
       

return 0;
}
