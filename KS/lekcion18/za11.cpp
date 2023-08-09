#include <stdio.h>

struct Book
{
    char name[20];
    char autor[20];
    int price;
    int yearizd;
    int count = 0;
    int sumprice = 0;
};

int main()
{
    struct Book var[5];
    struct Book yearnum;

    for(int i = 0; i < 5; i++)
    {
        printf("vvedite Book %d)\n", i + 1);
        printf("vvedite name Book ");
        scanf("%s", &var[i].name);
        printf("vvedite autor Book ");
        scanf("%s", &var[i].autor);
        printf("vvedite price Book ");
        scanf("%d", &var[i].price);
        printf("vvedite year izdania ");
        scanf("%d", &var[i].yearizd);
    }
    printf("\n");
    printf("vvedite year izdania ");
    scanf("%d", &yearnum.yearizd);
    for(int i = 0; i < 5; i++)
    {
        if(var[i].yearizd > yearnum.yearizd)
        {
            yearnum.count++;
            yearnum.sumprice += var[i].price;
        }
    }
    printf("kolichestvo Book %d\n", yearnum.count);
    printf("summa Book %d", yearnum.sumprice);

    return 0;
}