// �������� ���������, ������� � ������� ������� ����� ���������� �������� ���� ���������� (������ �������).
// ������� � �������� ���������� ������ ������� ��������� �� ����������, ��� �������� ����� �������� �������.
// �������� ���������� �������� � ����������.
// ��������� ������ ������� �  ������ ����� ������ �������� ���������� ����� ������ �������.
#include <stdio.h>
void replacing_a_variable(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    int number1, number2 = 0;
    printf("Input two number:\n");
    scanf("%d %d",&number1,&number2);
    int *pointer1,*pointer2 = NULL;
    pointer1 = &number1;
    pointer2 = &number2;
    replacing_a_variable(pointer1,pointer2);
    printf("After the function:\n");
    printf("%d\n%d",number1,number2);

    return 0;
}