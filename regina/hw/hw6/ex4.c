// Напишите программу, которая выводит на экран в столбик все делители введенного числа.

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a number:\n");
    scanf("%d", &a);
    for(b = 1; b < a; b++)
     {
          if(a % b == 0)
          {
               printf("%d\n", b);
          }
     }
return 0;
}
// отстутствует деление числа само на себя
