// Напишите программу для вычисления значения функции F(n), где n — натуральное число, задана следующими соотношениями: 
// F(n) = 1 при n = 1; 
// F(n) = n + F(n ? 1), если n чётно, 
// F(n) = 2 ? F(n ? 2), если n > 1 и при этом n нечётно. 
// Пользователь вводит n, программа должна вывести значение F(n).
#include <stdio.h>
int function( int number){
    if (number == 1){
        return 1;
    }else{
        if (number % 2 == 0)
        {
            return number + function(number - 1);
        }else{
            return 2 * function(number - 2);
        }
        
        
    }
    
    
}

int main(){
    int number = 0;
    printf("Input number:");
    scanf("%d",&number);
    int result = function(number);
    printf("Result: %d",result);
    return 0;
}