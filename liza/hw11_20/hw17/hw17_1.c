#include <stdio.h>
struct organization{
    char organizational_and_legal_form[30];
    char name[30];
    int inn;
    struct address{
        int index;
        char city[20];
        char street[20];
        int house_number;
        int office_number;
    };
};
int main(){
    struct organization info;
    printf("Organizational and legal form: ");
    scanf("%s", &info.organizational_and_legal_form);
    printf("Organization name: ");
    scanf("%s", &info.name);
    printf("INN: ");
    scanf("%d", &info.inn);
    printf("Index: ");
    scanf("%d", &info.index);
    printf("City: ");
    scanf("%s", &info.city);
    printf("Street: ");
    scanf("%s", &info.street);
    printf("House number: ");
    scanf("%d", &info.house_number);
    printf("Office number: ");
    scanf("%d", &info.office_number);
    printf("INN: %d\n", info.inn);
    printf("Organizational and legal form: %s\n", info.organizational_and_legal_form);
    printf("Organization name: %s\n", info.name);
    printf("Address: %d, city %s, street %s house %d office %d\n", info.index, info.city, info.street, info.house_number, info.office_number);
    return 0;
}