#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point coordinates[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Coordinates of the point %d: ", i + 1);
        scanf("%f %f", &coordinates[i].x, &coordinates[i].y);
    }
    struct point point_A;
    printf("Coordinates of the point A: ");
    scanf("%f %f", &point_A.x, &point_A.y);
    float min_distance = 100000;
    int min_index = -1;
    for(i = 0; i < 5; i++) {
        float distance = sqrt(pow(point_A.x - coordinates[i].x, 2) + pow(point_A.y - coordinates[i].y, 2));
        if(distance < min_distance) {
            min_index = i;
            min_distance = distance;
        }
    }
    printf("X = %.2f\nY = %.2f\n", coordinates[min_index].x, coordinates[min_index].y);
    return 0;
}

