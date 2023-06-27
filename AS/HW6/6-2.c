//Напишите программу, которая запрашивает ввод чисел, пока сумма введенных 
//четных чисел не станет больше 50, после чего выводит 
//сумму всех введенных чисел  и в следующей строке сумму введенных четных чисел.


#include <stdio.h>


int main() {
    int n=1 ; //.целое число 
    int summ=0; 
    int summodd=0;
   
     
    while (summ<50)
    {   printf("enter digit\n");
        scanf("%d", &n);
        summ+=n;    
     if(summodd%2==0) {
        summodd+=n;
    }
    }

    printf ("%d \n", summ);
   printf ("%d \n", summodd);

return 0;
}

