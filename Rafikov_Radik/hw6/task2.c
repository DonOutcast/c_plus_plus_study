// �������� ���������, ������� ����������� ���� �����, ���� ����� ��������� ������ ����� �� ������ ������ 50,
// ����� ���� ������� ����� ���� ��������� �����  � � ��������� ������ ����� ��������� ������ �����
#include <stdio.h>
int main(){
    int entered_namber = 0,sum_entered_nambers = 0,sum_even_nambers = 0;

    while (sum_even_nambers <= 50)
    {
        scanf("%d",&entered_namber);
        sum_entered_nambers += entered_namber;
        if(entered_namber % 2 == 0)
        {
          sum_even_nambers += entered_namber;
        }
        
    }
    printf("Sum entered nambers: %d\n", sum_entered_nambers);
    printf("Sum even namber: %d\n", sum_even_nambers);
   
    
    return 0;
}