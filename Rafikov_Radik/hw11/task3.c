// �������� ���������, ������� ��������� ���������� ��������� �������, ��?�����, ��� ������� �������������� ���� ��������� �������.
// ��������� ������ ����������� ���� �������� ��������� ������� � ���������� (10 ������������� ���������, ������ �������� � ��������� ������).
// ��������� ������ ������� ���������� ��������� �������, ��?����� �������� �������� ��������������� ���� ���������.
// ������� ���������� ��������� �������� � ���� �������, ������� ���������� ������� ����������, � � �������� ��������� �������� ������.
// ����� �������� ��������������� �������� � ���� �������, ������� ���������� ������� ��������, � � �������� ��������� �������� ������.
#include <stdio.h>

float average_value_array(int x[],int y){
    float sum = 0;
    for (int i = 0; i < y; i++)
    {
        sum += x[i];
    }
    sum = sum/y;

    return sum;
}

int namber_average_value_array(int x[],int y,float z){
    int count = 0;
    for (int i = 0; i < y; i++)
    {
        if (x[i] > z)
        {
            count++;
        }
        
    }

   return count;
    
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

    printf("\nQuantity: %d",namber_average_value_array(array,size,average_value_array(array,size)));
    
    return 0;
}