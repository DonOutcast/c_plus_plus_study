// �������� ��������� ��� ���������� �������� ������� F(n), ��� n � ����������� �����, ������ ���������� �������������: 
//                F(1) = 1;  
//      F(2) = 1; 
//         F(n) = F(n � 2) * n ��� n > 2. 
//      ������������ ������ n, ��������� ������ ������� �������� F(n). 
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