// Ќапишите программу, котора€ запрашивает ввод целого числа n и n-раз выводит слово УprogrammingФ в строку.
#include <stdio.h>
int main(){
    int entered_namber = 0;
    scanf("%d",&entered_namber);
    while (entered_namber!=0)
    {       
        printf("progremming\n");
        entered_namber--;
    }
    
    return 0;
}