#include <stdio.h>
struct point{
    int x;
    int y;
    int z;
};
int main(){
    struct point coordinates[3];
    int sum = 0;
    for (int i = 0; i < 3; i++){
        printf("X: ");
        scanf("%d", &coordinates[i].x);
        printf("Y: ");
        scanf("%d", &coordinates[i].y);
        printf("Z: ");
        scanf("%d", &coordinates[i].z);
        printf("\n");
        sum += coordinates[i].x;
    }
    printf("Sum: %d\n", sum);
    return 0;
}