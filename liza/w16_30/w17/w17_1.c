#include <stdio.h>
struct contact{
    char name[10];
    char surname[10];
    int phone;
};
int main(){
    struct contact a;
    scanf("%s", &a.name);
    scanf("%s", &a.surname);
    scanf("%d", &a.phone);
    printf("Name: %s\n", a.name);
    printf("Surname: %s\n", a.surname);
    printf("Phone: %d\n", a.phone);
    return 0;
}