// �������� ���������, ���������� �������, ������� �������� � ��������
// ��������� ��������� �� ���������� � ����������� �������� ���������� � 10 ���.
// �������� ���������� �������� � ����������.
// ��������� ������ ������� �� ����� �������� ���������� ����� ������ �������. 
#include <stdio.h>
void simple(int *x){
    *x*=10;
   
}


int main(){
    int number = 0;
    printf("Input number: ");
    scanf("%d",&number);
    int *pointer = NULL;
    pointer = &number;
    simple(pointer);
    printf("Number: %d\n",number);


    return 0;
}