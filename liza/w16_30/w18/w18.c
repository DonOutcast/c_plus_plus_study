#include <stdio.h>
struct position{
    int km;
    int m;
    int cm;
};
struct position move(struct position number_1, struct position number_2){
    struct position new_p;
    new_p.km = number_1.km + number_2.km;
    new_p.m = number_1.m + number_2.m;
    new_p.cm = number_1.cm + number_2.cm;
    while(1){
        if (new_p.cm >= 100){
            new_p.m += new_p.cm / 100;
            new_p.cm = new_p.cm % 100;
        } else if (new_p.m >= 100){
            new_p.km += new_p.m / 100;
            new_p.m = new_p.m % 100;
        } else {
            break;
        }
    }
    return new_p;
};
int main(){
    struct position point;
    scanf("%d %d %d", &point.km, &point.m, &point.cm);
    struct position change;
    scanf("%d %d %d", &change.km, &change.m, &change.cm);
    struct position result = move(point, change);
    printf("km = %d\n", result.km);
    printf("m = %d\n", result.m);
    printf("cm = %d\n", result.cm);
    return 0;
}