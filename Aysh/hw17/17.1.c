#include <stdio.h>
struct Information {
    char opf[20];
    char name[20];
    int inn;
    };
struct Adress {
    int index;
    char city[20];
    char street[20];
    int housenum;
    int officenum;
    };
int main() {
    struct Information info;
    struct Adress a;
    printf("Enter information about contact: Inn,Opf,Name\n");
    scanf("%d", &info.inn);
    scanf("%s", &info.opf);
    scanf("%s", &info.name);
    
    printf("Enter Adress: Index,City,Street,Housenum,Officenum \n");
    scanf("%d", &a.index);
    scanf("%s", &a.city);
    scanf("%s", &a.street);
    scanf("%d", &a.housenum);
    scanf("%d", &a.officenum);

    printf("Inn: %d\n", info.inn);
    printf("Opf: %s\n", info.opf);
    printf("Name: %s\n", info.name);

    printf("Adress :\n");
    printf("%d\n", a.index);
    printf("City: %s\n", a.city);
    printf("Street: %s\n", a.street);
    printf("House: %d\n", a.housenum);
    printf("Office: %d\n", a.officenum);
    return 0;
}