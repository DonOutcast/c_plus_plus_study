// �������� ���������, ������� ����������� ���� ������ ����� �������� � ���������� �� � ������.
// �������� �������, ������� ����� ����������� ������ ������� ������� � 2 ����,
// ������� � �������� ���������� �������� ���������� ��������� � ������� � ��������� �� ������,
// ����������� ���������� �������� ��������� ������� � 2 ���� ����� ��������� ������ �������.
// �������� ������ �� ����� � ���� ������ ����� ���� ������.
#include <stdio.h>
void multiplication(int *array, int size){
    for (int i = 0; i < size; i++)
    {
        *(array+i) *= 2;
    }
    
}

int main(){
    int size = 0;
    printf("input size array?\n");
    scanf("%d",&size);
    int array[size-1];
    for (int i = 0; i < size; i++)
    {
        printf("input array[%d]",i);
        scanf("%d",&array[i]);
    }
    int *pointer = NULL;
    pointer = &array[size-1];
    multiplication(pointer,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    


    
    return 0;
}