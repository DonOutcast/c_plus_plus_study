#include <stdio.h>

void func(int a[10]) {
    int min = a[0];
    for(int i = 0; i < 10; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("%d", min);
}
int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("minimum ");
    func(a);

    return 0;
}