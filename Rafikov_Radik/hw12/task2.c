// �������� ��������� ���  ���������� �������� ������� F(n), ��� n � ����������� �����, ������ ���������� �������������: 
// F(1) = 1; 
// F(n) = n + F(n ? 1), ���� n �����; 
// F(n) = 2 � F(n ? 2), ���� n > 1 � ��� ���� �������. 
// ������������ ������ n, ��������� ������ ������� �������� F(n). 
#include <stdio.h>
int function(int number){
    if (number == 1)
    {
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
    printf("Input namber:");
    scanf("%d",&number);
    int result = function(number);
    printf("Result: %d",result);

    return 0;
}