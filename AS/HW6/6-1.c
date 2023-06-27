//Напишите программу, которая запрашивает ввод целого числа n и n-раз выводит
// слово “programming” в строку.


#include <stdio.h>


int main() {
    int n = -1; //.целое число 
    
    printf("enter digit\n");
     scanf("%d", &n);
     
    while ((n>0))
    {
     n--;
    printf ("programming \n");
    }
    
     

return 0;
}

