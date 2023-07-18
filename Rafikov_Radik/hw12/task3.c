// Напишите программу для вычисления значения функции F(n), где n — натуральное число, задана следующими соотношениями: 
//                F(1) = 1;  
//      F(2) = 1; 
//         F(n) = F(n – 2) * n при n > 2. 
//      Пользователь вводит n, программа должна вывести значение F(n). 
#include <stdio.h>

int function(int number){
    if (number == 1){
        return 1;
    }else if (number == 2){
        return 1;
    }else{  
        return number * function(number - 2);
    }
    
    
    
}

int main(){
    int number = 0;
    printf("Input namber:");
    scanf("%d", &number);
    int result = function(number);
    printf("Result: %d",result);

    return 0;
}