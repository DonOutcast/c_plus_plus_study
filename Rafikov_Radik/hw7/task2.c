// �������� ���������, ������� ����������� ���� n,
// ����� ������� �� ����� � ������� ��� ������� ����� �� 1 �� n (������������).
#include <stdio.h>
int main(){
    int input_namber = 0;
    printf("input namber:");
    scanf(" %d",&input_namber);
    for (int i = 1; i <= input_namber; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}