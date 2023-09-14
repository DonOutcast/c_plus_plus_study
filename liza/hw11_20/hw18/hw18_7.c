#include <stdio.h>
struct car{
    char model[20];
    char brand[20];
    int year;
};
void older_than_X_years(struct car info[], int size, int X_years){
    printf("Cars older than X years: \n");
    for (int i = 0; i < size; i++){
        if (info[i].year > X_years){
            printf("%s %s\n", info[i].brand, info[i].model);
        }
    }
}
int main(){
    int size, X_years;
    printf("Number of cars: ");
    scanf("%d", &size);
    struct car info[size];
    printf("Cars:\n");
    for (int i = 0; i < size; i++){
        printf("Model: ");
        scanf("%s", &info[i].model);
        printf("Brand: ");
        scanf("%s", &info[i].brand);
        printf("Year: ");
        scanf("%d", &info[i].year);
        printf("\n");
    }
    printf("X years: ");
    scanf("%d", &X_years);
    older_than_X_years(info, size, X_years);
    return 0;

}