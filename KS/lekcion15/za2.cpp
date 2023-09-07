#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    int n;
    int count = 0;
    int count2 = 0;
    int summa = 0; 
    int summa2 = 0;
    float sred;
    float sred2;

    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for( int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    for( int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            summa += arr[i];
            if(arr[i] != 0)
            count++;
        }
        if(arr[i]%2 != 0)
        {
            summa2 += arr[i];
            if(arr[i] != 0)
            count2++;
        }
    }

    printf("\n");
    printf("summa %d\n", summa);
    printf("count %d\n", count);
    sred = (float)summa / count;
    printf("srednee %5.2f\n", sred);
    printf("summa2 %d\n", summa2);
    printf("count2 %d\n", count2);
     sred2 = (float)summa2 / count2;
    printf("srednee2 %5.2f\n", sred2);

    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(sred > sred2 && sred < arr[i] && arr[i]%2 ==0)
        {
            printf("%d ", arr[i]);
            sum1 += arr[i];
            break;
        }
        if(sred2 > sred && arr[i] < sred2 && arr[i]%2 != 0)
        {
            printf(" %d", arr[i]);
            sum2 += arr[i];
            break;
        }
    }
    printf("\n" );
    printf("%d\n", sum1);
    printf("%d\n", sum2);

    for(int i = 0; i < n; i++)
    {
        if(sred > sred2)
        {
            if(arr[i]%2 != 0)
            {
                arr[i] = sum1;
            }
            printf("%d ", arr[i]);
        }
        else if(sred2 > sred)
        {
            if(arr[i]%2 == 0)
            {
                arr[i] = sum2;
            }
            printf("%d ", arr[i]);
        }
        if(sred == sred2)
        {
            arr[i] = 0;
            printf("%d ", arr[i]);

        }
    }
    return 0;
}