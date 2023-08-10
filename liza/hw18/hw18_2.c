#include <stdio.h>
struct Rectangle{
    int width;
    int height;
};
int finding_the_area(struct Rectangle parameters){
    return parameters.width * parameters.height;
}
int main(){
    struct Rectangle parameters;
    printf("Width: ");
    scanf("%d", &parameters.width);
    printf("Height: ");
    scanf("%d", &parameters.height);
    int area = finding_the_area(parameters);
    printf("Area: %d\n", area);
    return 0;
}