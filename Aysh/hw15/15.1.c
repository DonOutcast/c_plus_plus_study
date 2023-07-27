#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array;
    int i,n;
    int temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    array = (int *) malloc(n*sizeof(int));
        for(i = 0;i < n;i++) {
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
}
       for(i = 0;i < n;i++) {
           for(int j = 0;j < n-1;j++) {
               if (array[j + 1] < array[j]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

           }
       }
          printf("Sorted array: ");
          for (int k = 0; k < n; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
        free(array);
return 0;
}