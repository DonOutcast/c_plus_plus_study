// �������� ���������, ������� ������� ������������ ������� � �������.
// ��������� ������ ����������� ���� �������� ��������� ������� � ���������� (10 ������������� ���������, ������ �������� � ��������� ������).
// ��������� ������ ������� �������� ����������� ��������. 
// ����� ����������� �������� �������� � ���� �������, ������� ���������� �������� ����������� ��������, � � �������� ��������� �������� ������.
#include <stdio.h>

int max_namber_array(int x[],int y){
    int max_namber = 0;
    for (int i = 0; i < y; i++)
    {
        if (max_namber < x[i])
        {
            max_namber = x[i];
        }
        
    }
    return max_namber;

}


int main(){
    int size = 0;
    printf("Input size array?\n");
    scanf("%d",&size);
    int array[size - 1];
    for (int i = 0; i < size; i++)
    {
        printf("Input array[%d]:",i);
        scanf("%d",&array[i]);
    }

    printf("\nMax namber array: %d",max_namber_array(array,size));
    
    return 0;
}