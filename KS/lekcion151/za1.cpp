#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    int min = 0;;
    int temp = 0;
    for(int i = 0; i < n; i++)  {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)  {
        min = i;
    
        for(int j = i + 1; j < n; j++)  {
            if(arr[j] < arr[min])   {
                min = j;
            }
        } 
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
      printf("\n");
    for(int i = 0; i < n; i++)  {
        printf("%d ", arr[i]);
    }
    return 0;
}