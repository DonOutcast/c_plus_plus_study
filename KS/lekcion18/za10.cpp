#include <stdio.h>

struct Classroom
{
    char name[20];
    char lastname[20];
    int numclass;
    int numpoisk;
}; 

int main()
{
    struct Classroom var[5];
    struct Classroom numpo;

    for(int i = 0; i < 5; i++)
    {
        printf("vvedite info ychenika %d)\n", i + 1);
        printf("vvedite name ychenika ");
        scanf("%s", &var[i].name);
        printf("vvedite lastname ychenica ");
        scanf("%s", &var[i].lastname);
        printf("vvedite nomer classa ychenica ");
        scanf("%d", &var[i].numclass);
    }
    printf("\n");
    printf("vvedite nomer classa ");

    scanf("%d", &numpo.numpoisk);
    for(int i = 0; i < 5; i++)
    {
        if(var[i].numclass == numpo.numpoisk)
        {
            printf("Lastname %s\n", var[i].lastname);
        }
    }
    

    return 0;
}