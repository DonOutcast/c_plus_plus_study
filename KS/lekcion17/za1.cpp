#include <stdio.h>
struct Org {
     char opv[20];
     char name[20];
     int inn;
     int index;
     char city [30];
     char street[30];
     int numhouse;
     int numoffice;
};
int main() {

      struct Org var;

    printf("vvedite organizacionno pravovuy formu \n");
    scanf("%s", &var.opv);
    printf("vvedite nazvanie\n");
    scanf("%s", &var.name);
    printf("vvedite INN\n");
    scanf("%d", &var.inn);
    printf("vvedite adress:\n");
    printf("vvedite index\n");
    scanf("%d", &var.index);
    printf("vvedite gorod\n");
    scanf("%s", &var.city);
    printf("vvedite street\n");
    scanf("%s", &var.street);
    printf("vvedite nomer doma\n");
    scanf("%d", &var.numhouse);
    printf("vveditw nomer office\n");
    scanf("%d", &var.numoffice);

    printf("\n");

    printf("dannie organizacii:\n\n");
    printf("INN - %d\n", var.inn);
    printf("organizacionno pravovaia forma -  %s\n", var.opv);
    printf("nazvanie - %s\n", var.name);
    printf("Adres;\n");
    printf("index - %d\n", var.index);
    printf("city - %s\n", var.city);
    printf("street - %s\n", var.street);
    printf("house - %d\n", var.numhouse);
    printf("office - %d\n", var.numoffice);
    
return 0;
}