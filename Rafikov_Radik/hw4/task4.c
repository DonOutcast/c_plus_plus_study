// ������ ���������, ������� ����������� 3 ����� (����� ��������  � ���� ������ ����� ������),
// ���������� ���������� � ������� ��� �� �����.
#include <stdio.h>
int main(){
    int namber1 = 0,namber2 = 0,namber3 = 0;
    scanf("%d%d%d",&namber1,&namber2,&namber3);
    if (namber1 >= namber2 && namber1 >= namber3)
    {
        printf("%d",namber1);
    }
    else if (namber2 >= namber1 && namber2 >= namber3)
    {
        printf("%d",namber2);
    }
    else 
    {
        printf("%d",namber3);
    }
    
return 0;    
}