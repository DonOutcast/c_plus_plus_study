// Создайте структуру для хранения координат точки в трехмерном пространстве (x, y z). 
// Создайте массив из трех таких структур, ввод данных запросите с клавиатуры. 
// Выведите сумму координат x всех точек.
#include <stdio.h>
struct Cardinals{
    int x;
    int y;
    int z;
};
int main(){
    struct Cardinals info[3];
    int sum = 0;
    for (int i = 0; i < 3; i++){
        printf("Enter point %d:\n",i+1);
        printf("enter x: ");
        scanf("%d",&info[i].x);
        printf("enter y: ");
        scanf("%d",&info[i].y);
        printf("enter z: ");
        scanf("%d",&info[i].z);
        sum+=info[i].x;
    }
    printf("Sum x cardinals: %d",sum);
    
    return 0;
}