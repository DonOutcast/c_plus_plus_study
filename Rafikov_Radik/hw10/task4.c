//������������ ������ ����������� ����� n (n>1). ���������, �������� �� ��� �������.
//��������� ������ ������� �+�, ���� ����� ������� � �-�, ���� ����� ���������.
// ������� �������� � ���� �������, ������� ���������� �+� ��� ������� ����� � �-�   ��� ��������� �����.   
#include <stdio.h>
#include <math.h>

char SimpleOrCompound(int x){
    if (x <= 1){
        return '-';
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return '-';
        }
    }

    return '+';
    }
int main(){
    int namber = 0;
    printf("Input namber > 1: ");
    scanf("%d",&namber);

    printf("%c",SimpleOrCompound(namber));

    return 0;
}