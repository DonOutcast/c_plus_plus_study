// ��������� ������ ��� ����������� �������
// �������� ���������, ������� ����������� � ������������ ������ ������� (���������� ���������) � ����� ����������� �������� ������ ��� ����� �������.
// ��������� ������ ���������� ������� � �������� ��� �� �����,
// ����� ���� ����� ����� �� ������� ��������� ������ 10 �������� ��� ����� �� ��������� �� 10 ����� �� 5.
// ����� ���������� ������ � ��������, ���������� ���������� ������.
#include <stdio.h>
#include <stdlib.h>
void printarray(int **array,int row,int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int column,row,sum = 0;
    int **array = NULL;
    printf("Input column: ");
    scanf("%d",&column);
    printf("Input row: ");
    scanf("%d",&row);
    array = (int**)malloc(row * sizeof(int));
    if (array == NULL){
        printf("Error!");
    }else{
        for (int i = 0; i < row; i++){
            array[i] = (int*)malloc(column * sizeof(int));
            if (array[i] == NULL){
                printf("Error!");
            }else{
                for (int j = 0; j < column; j++){
                    printf("array[%d][%d]",i,j);
                    scanf("%d",&array[i][j]);
                    if (i == j){
                        sum+=array[i][j];
                    }
                }
            }    
        } 
    }
    printf("\n");
    printarray(array,row,column);
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (sum > 10 && i == j){
                array[i][j]=10;
            }else if (sum < 10 && i == j){
                array[i][j]=5;
            }    
        }    
    }
    printf("\n");
    printarray(array,row,column);

    for (int i = 0; i < row; i++){
        free(array[i]);
    }
    

    free(array);
    return 0;
}