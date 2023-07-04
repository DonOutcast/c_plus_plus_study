#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int mark;
    scanf("%d", &mark);
    switch(mark){
        case 2: 
        printf("Неудовлетворительно\n");
        break;
        case 3: 
        printf("Удовлетворительно\n");
        break;
        case 4: 
        printf("Хорошо\n");
        break;
        case 5: 
        printf("Отлично\n");
        break;
        default: 
        printf("Error\n");
    }
    return 0;
}