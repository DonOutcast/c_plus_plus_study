#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array;
    int i,n;
    int sumeven=0;
    int sumodd=0;
    float sumevenaverage=0;
    float sumoddaverage=0;
    float counteven=0;
    float countodd=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    array = (int *) malloc(n*sizeof(int));
        for(i = 0;i < n;i++) {
            printf("array[%d]=",i);
            scanf("%d",&array[i]);
            if(array[i]% 2 == 0) {
                sumeven+=array[i];
                counteven++;
    }
    else {
         sumodd+=array[i];
         countodd++;
    }
}
sumevenaverage = sumeven / counteven;
sumoddaverage = sumodd / countodd;
if(sumevenaverage > sumoddaverage) {
    for(i = 0;i < n;i++) {
   if(array[i]%2 != 0 ) {
        array[i] = array[i] + 1;
    }
    }
}
else if(sumevenaverage < sumoddaverage) {
    for(i = 0;i < n;i++) {
    if(array[i]%2 == 0 ) {
        array[i] = array[i] - 1;
    }
 }
}
else {
    for(i = 0;i < n;i++) {
        array[i] = 0;
    }
}

   printf("New array: ");
   for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    free(array);
    return 0;
}


