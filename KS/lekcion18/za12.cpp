#include <stdio.h>
#include <math.h>

 struct Point 
 {
    float x;
    float y;
    float otv;
    float min;
 };

int main()
{
    struct Point var[5];
    struct Point otvet;

    for(int i = 0; i < 5; i++)
    {
        printf("vvedite koordinati Point %d)\n", i + 1);
        printf("vvedite x ");
        scanf("%f", &var[i].x);
        printf("vvedite y ");
        scanf("%f", &var[i].y);
    }
    for(int i = 0; i < 4; i++)
    {
        var[i].otv = sqrt((var[i+1].x - var[0].x)*(var[i+1].x - var[0].x) + (var[i+1].y-var[0].y)*(var[i+1].y-var[0].y));

        printf("%f\n", var[i].otv);
    }
    otvet.min = var[0].otv;
    for (int i = 0; i < 4; i++)
    {
        if(var[i].otv < otvet.min)
        {
            otvet.min = var[i].otv;
        }
    }
    printf("\n");
    printf("minimum %f\n", otvet.min);

    for(int i = 0; i < 5; i++)
    {
        if(otvet.min == var[i].otv)
        {
            printf("x =%5.0f", var[i+1].x);
            printf("\n");
            printf("y =%5.0f", var[i+1].y);
        }
    }

    return 0;
}