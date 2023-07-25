// Напишите программу, содержащую функцию, которая получает в качестве
// аргумента указатель на переменную и увеличивает значение переменной в 10 раз.
// Значение переменной вводится с клавиатуры.
// Программа должна вывести на экран значение переменной после вызова функции. 
#include <stdio.h>
void simple(int *x){
    *x*=10;
   
}


int main(){
    int number = 0;
    printf("Input number: ");
    scanf("%d",&number);
    int *pointer = NULL;
    pointer = &number;
    simple(pointer);
    printf("Number: %d\n",number);


    return 0;
}