#include <stdio.h>

struct Car
{
    char model[20];
    char brand[20];
    int year;
};

struct Car older(struct Car array[], struct Car checkyear,int size)
{
    printf("Enter the count of years:\n");
    scanf("%d", &checkyear.year);
    printf("Cars olders than %d years:\n", checkyear.year);
    for (int i = 0; i < size; i++)
    {
        if(2023-array[i].year > checkyear.year)
        {
            printf("%s\n", array[i].model);
            printf("%s\n", array[i].brand);
            printf("%d \n", array[i].year); 
        }
    }
}

int main() {
    struct Car info[5];
    struct Car checkyear;
    for (int i = 0; i < 5; i++) {
        printf("Enter model,brand and year of the car number %d\n",i+1);
        scanf("%s", &info[i].model);
        scanf("%s", &info[i].brand);
        scanf("%d", &info[i].year);
        }
        older(info,checkyear,5);
        return 0;
}
