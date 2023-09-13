#include <stdio.h>
struct simple{
    int x;
    int y;
    int z;
};

int main(){
    int sum = 0;
    struct simple a[3];
    for (int i = 0; i < 3; i++){
        scanf("%d", &a[i].x);
        scanf("%d", &a[i].y);
        scanf("%d", &a[i].z);
    }
    for (int i = 0; i < 3; i++){
        sum += a[i].x;
    }
    printf("%d\n", sum);
    return 0;
}