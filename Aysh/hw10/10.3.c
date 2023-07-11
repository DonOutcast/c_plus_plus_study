#include <stdio.h>
#include <math.h>
float length(float x1,float y1,float x2,float y2 ) {
    float d=0;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}
int main() {
    float x1=0;
    float y1=0;
    float x2=0;
    float y2=0;
    printf("Enter x1,y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2,y2: ");
    scanf("%f %f", &x2, &y2);
    printf("length=%10.2f\n",length(x1,y1,x2,y2));
    return 0;
}

