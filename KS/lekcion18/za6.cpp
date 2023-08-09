#include <stdio.h>

struct Book
{
    char name[20];
    char autor[20];
    int date;
};
struct Book func(struct Book arr[], struct Book newyear)
{
    printf("vvedite books one date\n");
    scanf("%d", &newyear.date);
    for(int i = 0; i < 3; i++)
    {
        if(arr[i].date == newyear.date)
        {
            printf("%s ", arr[i].name);
            printf("%s ", arr[i].autor);
            printf("%d \n", arr[i].date);
        }
    }
}

int main()
{
    struct Book arr[3];
    struct Book newyear;

    for(int i = 0 ; i < 3; i++)
    {
        printf("vvedite nazvanie, autora, and date\n");
        scanf("%s", &arr[i].name);
        scanf("%s", &arr[i].autor);
        scanf("%d", &arr[i].date);
    }
    func(arr, newyear);

    return 0;
}