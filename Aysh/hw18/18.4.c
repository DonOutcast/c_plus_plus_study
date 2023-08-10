#include <stdio.h>
#include <math.h>
struct Point {
    float x;
    float y;
};


float distance(struct Point number_1, struct Point number_2) {
 
    return sqrt(pow((number_2.x-number_1.x),2)+pow((number_2.y-number_1.y),2));
}


int main() {
    struct Point start;
    struct Point finish;
    float result = 0;
    printf("Enter start coordinates x,y:\n");
    scanf("%f", &start.x );
    scanf("%f", &start.y );
    printf("Enter finish coordinates x,y:\n");
    scanf("%f", &finish.x );
    scanf("%f", &finish.y );
    result = distance(start, finish); 
    printf("Distance= %f\n",result);
return 0;
}