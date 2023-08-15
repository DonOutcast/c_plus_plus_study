#include <stdio.h>
#include <stdlib.h>
struct information{
    char name[15];
    float balance;
};
int main(){
    struct information info;
    struct information *point_info = &info;
    printf("Name: ");
    scanf("%s", &point_info->name);
    printf("Balance: ");
    scanf("%f", &point_info->balance);
    printf("%10.2f\n", point_info->balance * 2);


    return 0;
}