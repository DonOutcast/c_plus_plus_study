// ������������ ������ N-���������� �����, ��������� ������ �������  ��������� ���� "N bochek".
// ��������, "3 bochki" ��� "1 bochka".
// �������� ���������, ������� �������� ���������� ����� (�� "bochka", "bochek" , "bochki") � ����������� �� N (0 ? N ? 1000).
#include <stdio.h>
int main(){
    int answer = 0;
    scanf("%d",&answer);
    if(answer >= 0 && answer <= 1000){
        if(answer == 1)
        {
            printf("%d bochka",answer);
        }
        else if (answer >= 2 && answer <= 4)
        {
            printf("%d bochki",answer);
        }
        else 
        {
            printf("%d bochek",answer);
        }
          
    }else{
        printf("enter a number from 0 to 1000");
    }
return 0;    
}