// ������ ���������, ������� ���������� �������� �� ��������� ������ ����� � ���� ���� ��� � ������.
// ��������� ����������� ������ ����� �� 1 �� 8 ������.
// ������ ��� ����� � ������ ���������� ������ ������ (����� ������ � �������),
// ������ � ���������� ������ ������ (�������������, ��� ������ �� ���������).
// ��������� ������ ������� "��", ���� ��������� ������ ����������� �����, ����� � "���"
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL,"Russian");
    int now_string = 0,now_columns = 0,new_string = 0,new_columns = 0;
    while (1)
    {
       scanf("%d%d%d%d",&now_string,&now_columns,&new_string,&new_columns);
       if (((now_string > 0&&now_string < 9)&&(now_columns > 0&&now_columns < 9)&&(new_string > 0&&new_string < 9)&&(new_columns > 0&&new_columns < 9)))
       {
        if (now_string + now_columns + new_string + new_columns % 2 == 0){
            printf("��");
        }else {
            printf("���");
        }
       }
       else
       {
        printf("������� ����� � 1 �� 8");
       }
       
       
    }
    
}