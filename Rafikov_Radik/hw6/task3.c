// ��������� ���� while, �������� ���������, 
// ������� ������� �� ����� � ������� ��� ��������� �� 10-�� ����� ����.
// ����� ��������� � ��� �������� �������� ������������������,
// � ������� ������ ��� ����� ����� 1 � 1, � ������ ����������� ����� ����� ����� ���� ���������� �����.
#include <stdio.h>
int main(){
    int namber1 = 1;
    int namber2 = 1;
    int namber3 = 0;
    int answer = 0;
    printf("%d\n%d\n",namber1,namber2);
    while (answer < 8)
    {
        namber3 = namber1 + namber2;
        printf("%d\n",namber3);
        namber1 = namber2;
        namber2 = namber3;
        answer++;

    }
    

    return 0;
}