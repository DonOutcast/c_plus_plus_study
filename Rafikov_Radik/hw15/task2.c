// �������� ������������� ������, ���������� ��������� ������� �� ��������.
// ����������� ���� ��������� �������, ���� �� ����� ������ 0.
// �������� ������ �������������� ����� � ����� �� ����������� ���������,
// ��������� ��� ���������� � �������� �������� ���������������� �������� ������� ������� � �������� ��������������� ���� ��������� ������� �������.
// �������� �� ����� � ������ �������� ������� ������� � ������� 8 ��������� ��� �� ����� � 2 ���������� ��� ������� �����.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array = NULL;
    int *array2 = NULL;
    int number = 1;
    int count = 1;
    int sum = 0;
    while (number != 0){
        array = (int*) realloc (array,count * sizeof(int));
        printf("Input namber:");
        scanf("%d",&array[0 + (count-1)]);
        number = array[0+(count-1)];
        sum += array[count-1];
        count++;
    }

    float result = sum/(count-1);
  
    array2 = (int*)malloc((count-1)*sizeof(int));
    for (int i = 0; i < (count-1); i++)
    {
        array2[i] = array[i] - result;
        printf("%8.2d",array2[i]);
    }
    

    
    
    
    return 0;
}