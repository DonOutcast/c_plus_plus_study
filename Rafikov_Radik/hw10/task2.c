// �������� ���������, ������� ����������� � ������������ ��� ������� �� 10 ��������� � ������ 
// (����� �����, �������� � ���������� ������ ����� � ����� ������, ������� �������� ������� �������, ����� �������).
// ��������� ������� ���������� �������� �������� � ��������� ������ ������, ��������� �� ���������� ��������� ���. 
// ������� �� ����� �������� ��������� �������� ������� � ������ ����� ���� ������ ����� ����������.
// �������� ����� �������� �������� � ������������ �������� ������� �������� � ���� �������.
#include <stdio.h>

int Input_Array(int x[],int y){
    
    printf("input namber array:\n");
    for (int i = 0; i < y; i++){
        scanf("%d",&x[i]);
    }
   return 0;
}

int Conclusion_Array(int x[],int y){
    for (int i = 0; i < y; i++){
       printf("%d ",x[i]);
    }
    return 0;
}
int MaxNamberTwoArray(int x[],int y[],int z[],int b){
    for (int i = 0; i < b; i++){
        if (x[i] >= y[i]){
            z[i] = x[i];
        }
        else{
            z[i] = y[i];
        }
    }    
    return 0;
}

int main(){
    int size = 0;
    printf("Input size array?\n");
    scanf("%d",&size);
    int array[size];
    int array2[size];
    int array3[size];

    Input_Array(array,size);
    Input_Array(array2,size);
    MaxNamberTwoArray(array,array2,array3,size);
    printf("\nMax namber array:");
    Conclusion_Array(array3,size);
     
    return 0;
}