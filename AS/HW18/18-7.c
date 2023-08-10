//  Создайте структуру "Автомобиль", содержащую поля для модели, марки и года выпуска. 
//  Напишите функцию "старшеXЛет", которая принимает массив структур "Автомобиль" и число 
//  X в качестве параметров и выводит на экран все автомобили, старше X лет.

#include <stdio.h>


struct Car {
    char model[50];
    char brand[50];
    int year;
};

void olderX(struct Car cars[], int length, int X) {
    printf("Cars older than %d years:\n", X);

    for (int i = 0; i < length; i++) {
        if (2023 - cars[i].year > X) {
            printf("model: %s\n", cars[i].model);
            printf("brand: %s\n", cars[i].brand);
            printf("year: %d\n", cars[i].year);
            }
    }
}

int main() {
 
    struct Car cars[3];

    printf("Enter the car info:\n");

    for (int i = 0; i < 3; i++) {
        printf("Car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Brand: ");
        scanf("%s", cars[i].brand);
        printf("Year: ");
        scanf("%d", &cars[i].year);
    }

    int X;
    printf("Enter the year X: ");
    scanf("%d", &X);

    
    olderX(cars, 3, X);

    return 0;

}
