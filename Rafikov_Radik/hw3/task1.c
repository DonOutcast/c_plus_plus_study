// ������ ���������, ������� ���������� �2+2=?�, ���� ������������ �������� �4�- ��������� ������� �� ����� ������!�.
// �� ���� ��������� ������� ������� �������!�.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    printf("2+2=?\n");
    int namber = 0;
    scanf("%d",& namber);
    if(namber==4){
        printf("�����!\n");
    }else{
        printf("������!\n");
    }
    return 0;
}