// �������� ��������� ��� ������ �� ����� ���������� ������� � ��������� ����������� ��������� � �������.
// ��������� ����������� ���������� �����, ����� ��� ������ ������ ���������� ���������, ����� ���� ��������.
// ��������� ������ ������� ������ � ���� ������� � ����������� ����� ���������� � ������ � ���� ������.
#include <stdio.h>

int main(){
    int row = 0;
    printf("input row:");
    scanf("%d",&row);
    int array[row];
    for (int i = 0; i < row; i++)
    {   
        int columns = 0;
        printf("input columns:");
        scanf("%d",&columns);
        array[columns];

        for (int j = 0; j < columns; j++)
        {
            scanf("%d",array[i]);
        }
        
    }
    
    return 0;
}