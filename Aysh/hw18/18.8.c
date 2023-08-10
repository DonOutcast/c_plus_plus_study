#include <stdio.h>
struct Coordinates {
    int x;
    int y;
    int z;
};


int main() {
    
    struct Coordinates array[3];
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter coordinate x%d = ",i);
        scanf("%d", &array[i].x);
        printf("Enter coordinate y%d = ",i);
        scanf("%d", &array[i].y);
        printf("Enter coordinate z%d = ",i);
        scanf("%d", &array[i].z);
    }

    for (int i = 0; i < 3; i++) {
        sum += array[i].x;
    }
    printf("Sum = %d\n", sum);

    return 0;
}