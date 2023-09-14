#include <stdio.h>
#include <stdlib.h>
struct Products{
    char name[20];
    float cost;
    int count;
};
int main(){
    int number_of_products;
    float sum = 0;
    printf("Number of products: ");
    scanf("%d", &number_of_products);
    struct Products *info = (struct Products *)malloc(number_of_products * sizeof(struct Products));
    for (int i = 0; i < number_of_products; i++){
        printf("Product %d\n", i + 1);
        printf("Name: ");
        scanf("%s", &(info + i)->name);
        printf("Cost: ");
        scanf("%f", &(info + i)->cost);
        printf("Count: ");
        scanf("%d", &(info + i)->count);
        sum += (float)(info + i)->cost * (info + i)->count;
        printf("\n");
    }
    printf("Sum: %10.2f\n", sum);
    free(info);
    return 0;
}