#include <stdio.h>
#include <math.h>
struct point{
    int x;
    int y;
};
double finding_the_distance(struct point num_1, struct point num_2){
    return sqrt(pow((num_2.x - num_1.x), 2) + pow((num_2.y - num_1.y), 2));
};
int main(){
    struct point num_1, num_2;
    printf("First point\n");
    printf("x: ");
    scanf("%d", &num_1.x);
    printf("y: ");
    scanf("%d", &num_1.y);
    printf("\nSecond point\n");
    printf("x: ");
    scanf("%d", &num_2.x);
    printf("y: ");
    scanf("%d", &num_2.y);
    double distance = finding_the_distance(num_1, num_2);
    printf("Distance: %.2f\n", distance);
    return 0;
}