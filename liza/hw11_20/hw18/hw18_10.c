#include <stdio.h>
struct student{
    char name[15];
    char surname[15];
    int class_number;
};
int main(){
    struct student info[5];
    int class;
    printf("Students: \n");
    for (int i = 0; i < 5; i++){
        printf("Name: ");
        scanf("%s", &info[i].name);
        printf("Surname: ");
        scanf("%s", &info[i].surname);
        printf("Class number: ");
        scanf("%d", &info[i].class_number);
        printf("\n");
    }
    printf("Class: ");
    scanf("%d", &class);
    printf("Students of the %d class: \n", class);
    for (int i = 0; i < 5; i++){
        if (info[i].class_number == class){
            printf("%s\n", info[i].surname);
        }
    }
    return 0;

}