// �������� ��������� ��� �������� ���������� � �������� (���, �������, ����� ������).
// �������� ������ �� ���� ����� ��������, ���� ������ ��������� � ����������.
// ��������� ������ ����������� ���� ������ � �������� � ������� � ����� ������ ������� �������� �������������� ������.
#include <stdio.h>
struct Stydent{
    char name[20];
    char surname[20];
    int namber_class;
};

int main(){
    struct Stydent info[5];
    for (int i = 0; i < 5; i++){
        printf("Info %d stydent\n", i+1);
        printf("Name: ");
        scanf("%s",&info[i].name);
        printf("Surname: ");
        scanf("%s",&info[i].surname);
        printf("Namber class: ");
        scanf("%d",&info[i].namber_class);
    }
    int classnew = 0;
    printf("Which class names do you need: ");
    scanf("%d",&classnew);
    for (int i = 0; i < 5; i++){
        if (classnew == info[i].namber_class){
            printf("%s\n",info[i].surname);
        }
        
    }
    
    
    return 0;
}