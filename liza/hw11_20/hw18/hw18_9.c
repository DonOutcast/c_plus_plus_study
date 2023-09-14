#include <stdio.h>
struct point{
    int x;
    int y;
    char color;    
};
int main(){
    struct point picture[5];
    int count;
    for (int i = 0; i < 5; i++){
        scanf("%d", &picture[i].x);
        scanf("%d", &picture[i].y);
        scanf("%s", &picture[i].color);
        printf("\n");
        if (picture[i].x < 10 && picture[i].color == 'r'){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}