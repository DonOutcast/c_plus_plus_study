#include <stdio.h>
#include <math.h>

struct Coordinates {
    float x;
    float y;
};

int main() {
    struct Coordinates array[5];
    float ax = 0;
    float ay = 0;
    float distance[5];
    float mindistance=0;
    float x_1 = 0;
    float y_1 = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter coordinates of the point number %d:\n",i+1);
        scanf("%f", &array[i].x);
        scanf("%f", &array[i].y);
        }
    printf("Enter coordinates of the point A:\n");
    scanf("%f", &ax);
    scanf("%f", &ay);
    for (int i = 0; i < 5; i++) {
        distance[i] = sqrt(pow((array[i].x-ax),2)+pow((array[i].y-ay),2));
 }   
    mindistance=distance[0];
    for (int i = 0; i < 5; i++) {
        if(distance[i] < mindistance) {
            mindistance = distance[i];
            x_1 = array[i].x;
            y_1 = array[i].y;
            
        }
}
   printf("X = %f\n", x_1);
   printf("Y = %f\n", y_1);


    return 0;
}