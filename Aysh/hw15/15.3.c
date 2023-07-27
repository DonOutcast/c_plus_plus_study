#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array1=NULL;
    float *array2=NULL;
    int i=0;
    float sum=0;
    int count=0;
    int temp;
    float average=0;
    printf("Enter elements of array:\n");
    while (scanf("%d", &temp) == 1 && temp != 0) {
        count++;
        array1 = (int*)realloc(array1, count * sizeof(int));
        array1[count - 1] = temp;
 }         
        
        for(int i=0;i<count;i++){
          sum+=array1[i];
        }
    average=sum / count;
    array2 = (float *) malloc(count*sizeof(float));

    printf("Second array: ");
    for(i = 0;i < count;i++) {
        array2[i] = array1[i] - average;
        printf("%8.2f", array2[i]);
    }
    printf("\n");
    free(array1);
    free(array2);
    return 0;
}