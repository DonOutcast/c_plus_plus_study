#include <stdio.h>

struct Coordinates {
    char colour;
    int x;
    int y;
};


int main() {
    struct Coordinates array[5];
    int count = 0;
    char sym;
    for (int i = 0; i < 5; i++) {

        scanf("%c", &array[i].colour);
        scanf("%c",&sym);

        scanf("%d", &array[i].x);
        scanf("%d", &array[i].y);
        scanf("%c",&sym);
        
    }

    for (int i = 0; i < 5; i++) {
        if(array[i].x < 10 && array[i].colour == 'r') {
            count++;
        }
        
    }
    printf("Count = %d\n",count);
    return 0;
}