#include <stdio.h>

struct Kord
{
    int x;
    int y;
    int z;
    int summa = 0;
};
int main()
{
    struct Kord arr[3];
    struct Kord summ;

    for (int i = 0; i < 3; i++)
    {
        printf("vvedite koordinati %d)\n", i+1);
        printf("vvedite x ");
        scanf("%d", &arr[i].x);
        printf("vvedite y ");
        scanf("%d", &arr[i].y);
        printf("Vvedite z ");
        scanf("%d", &arr[i].z);

        summ.summa += arr[i].x;
    }
    printf("summa x %d", summ.summa);
  
    return 0;
}