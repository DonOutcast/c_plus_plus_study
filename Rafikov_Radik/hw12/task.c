// Ќапишите программу дл€ вычислени€ значени€ функции F(n) и G(n), где n Ц натуральное число, задана следующими соотношени€ми: 
// F(1) = 1 
// F(n) = 2 * G(nЦ1) + 5 * n, при n >1 
// G(1) = 1 
// G(n) = F(nЦ1) + 2 * n, при n >1 
// ѕользователь вводит n и m (в отдельных строках), программа должна вывести F(n)+G(m). 
#include <stdio.h>

int function_f(int number){

    if (number == 1){
        return 1 ;
    }else{
       
        return (5 * number) + 2 * function_g(number - 1) ;
    }
    
}

int function_g(int number){

    if (number == 1){
        return 1 ;
    }else{
       
        return (2 * number) + function_f(number - 1);
    }
    
}

int main(){
    int number1 = 0,number2 = 0;
    printf("Input 1 number: ");
    scanf("%d",&number1);
    printf("Input 2 number: ");
    scanf("%d",&number2);
    int result = function_f(number1) + function_g(number2);
    printf("result: %d",result);

    return 0;
}