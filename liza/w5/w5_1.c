#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int mark;
    scanf("%d", &mark);
    switch(mark){
        case 2: 
        printf("�������������������\n");
        break;
        case 3: 
        printf("�����������������\n");
        break;
        case 4: 
        printf("������\n");
        break;
        case 5: 
        printf("�������\n");
        break;
        default: 
        printf("Error\n");
    }
    return 0;
}