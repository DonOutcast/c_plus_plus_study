#include <stdio.h>

struct Student
{
    char name[20];
    int vozrast;
    int ocenka;
};
struct Student func(struct Student var)
{
    printf("Name %s\n", var.name);
    printf("vasrast %d\n", var.vozrast);
    printf("ocenka %d\n", var.ocenka);

}
int main()
{
    struct Student var;

    printf("vvedite name\n");
    scanf("%s", &var.name);
    printf("vvedite vozrast\n");
    scanf("%d", &var.vozrast);
    printf("vvedite sredniy ocenku\n");
    scanf("%d", &var.ocenka);

    func(var);

    return 0;
}