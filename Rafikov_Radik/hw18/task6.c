// Создайте структуру "Автомобиль", содержащую поля для модели, марки и года выпуска. Напишите функцию "старшеXЛет",
// которая принимает массив структур "Автомобиль" и число X в качестве параметров и выводит на экран все автомобили, старше X лет.
#include <stdio.h>
struct Car{
    char model[20];
    char name[20];
    int year;
};
struct Car name_autor(struct Car info[],int yearnew){
    
    for (int i = 0; i < 3; i++){
        if (yearnew < info[i].year){
            printf("%s ",info[i].model);
            printf("%s ",info[i].name);
            printf("%d\n",info[i].year);
        }  
    }
}     



int main(){
    struct Car info[3];
    for (int i = 0; i < 3; i++){
        printf("Enter info car %d\n",i+1);
        printf("Enter Model: ");
        scanf("%s", &info[i].model);
        printf("Enter name: "); 
        scanf("%s", &info[i].name);
        printf("Enter year: ");
        scanf("%d", &info[i].year);
    }
    int yearnew = 0;
    printf("Older than what year: ");
    scanf("%d",&yearnew);
    name_autor(info,yearnew);
    return 0 ;
}