// �������� ��������� ��� ���������� �������� ������� F(n) � G(n), ��� n � ����������� �����, ������ ���������� �������������: 
// F(1) = 1 
// F(n) = 2 * G(n�1) + 5 * n, ��� n >1 
// G(1) = 1 
// G(n) = F(n�1) + 2 * n, ��� n >1 
// ������������ ������ n � m (� ��������� �������), ��������� ������ ������� F(n)+G(m). 
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