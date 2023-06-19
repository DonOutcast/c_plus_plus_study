//Пользователь вводит N-количество бочек, программа должна вывести  сообщения вида
// "N bochek". Например, "3 bochki" или "1 bochka".
//Напишите программу, которая выбирает правильное слово (из "bochka", "bochek" , "
//bochki") в зависимости от N (0 ≤ N ≤ 1000).
#include <locale.h>
#include <stdio.h>

int main() {



int n;
    
    printf ("vvedite kolichestvo bochek N :");
    scanf ("%d", &n);
    int a=n%10;
    int b=((n/10)%10);
    if (b>1) {
    if ((a==1) && (n!=11) && (n!=12) && (n!=13) && (n!=14) && (a!=0))
    {
        printf ("bochka");
    }
    else if (((1<<a) && (a<=4)) && (a!=0) && (n!=11) && (n!=12) && (n!=13) && (n!=14) )
    {
         printf ("bochki");
    }
    else {
         printf ("bochek");
    }
    }
    else if ((a==1) && (n!=11) && (n!=12) && (n!=13) && (n!=14) && (a!=0)) 
{
        printf ("bochka");
    }
    else if (((1<<a) && (a<=4)) && (a!=0) && (n!=11) && (n!=12) && (n!=13) && (n!=14) &&(b<1) )
    {
         printf ("bochki");}

    
    else {
         printf ("bochek");
    }
    

    return 0;
}