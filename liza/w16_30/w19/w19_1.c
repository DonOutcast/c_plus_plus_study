#include <stdio.h>
#include <stdlib.h>
struct Products{
    char name[20];
    float cost;
    int count;
};
int main(){
    struct Products information[];
    struct Products *info = &information;
    printf("Name: ");
    scanf("%s", &info->name);
    printf("Cost: ");
    scanf("%f", &info->cost);
    printf("Count: ");
    scanf("%d", &info->count);
    printf("%10.2f", info->cost * info->count);
    return 0;
}