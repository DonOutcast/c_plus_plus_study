// Напишите программу, которая возводит число a в степень n, a   и n вводятся с клавиатуры в отдельных строках. 
// Возведение в степень оформите в виде функции. Программа должна вывести одно число=а в степени n.
#include <stdio.h>

int Namber_Degree(int x,int y){
    int z = 1;
    for (int i = 1; i <= y; i++)
    {
        z *= x;
    }
    return z;
}


int main(){
    int namber = 0,degree = 0;
    printf("Input namber: ");
    scanf("%d",&namber);
    printf("Input degree: ");
    scanf("%d",&degree);

    printf("%d",Namber_Degree(namber,degree));


    return 0;
}