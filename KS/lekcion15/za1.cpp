#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int min;
    int temp;

    scanf("%d", &n);

    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        min = i;
        temp = arr[i];
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] < temp)
            {
                min = j;
                temp = arr[i];
            }
        } 
        if(min != i)
        {
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}