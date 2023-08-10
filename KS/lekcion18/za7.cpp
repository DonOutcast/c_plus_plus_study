#include <stdio.h>

struct Model
{
    char model[20];
    char marka[20];
    int year;
};
struct Model func(struct Model arr[], struct Model newyear)
{
    printf("vvedite year avto starshe\n");
    scanf("%d", &newyear.year);
    for (int i = 0; i < 3; i++)
    {
        if( arr[i].year > newyear.year)
        {
            printf("%s ", arr[i].model);
            printf("%s ", arr[i].marka);
            printf("%d \n", arr[i].year); 
        }
    }
}
int main()
{
    struct Model arr[3];
    struct Model newyear;

    for(int i = 0; i < 3; i++)
    {
        printf("vvedite avtomobil %d)\n", i + 1);
        printf("vvedite model\n");
        scanf("%s", &arr[i].model);
        printf("vvedite marku\n");
        scanf("%s", &arr[i].marka);
         printf("vvedite year\n");
         scanf("%d", &arr[i].year);
    }
    func(arr, newyear);

    return 0;
}