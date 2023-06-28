#include<stdio.h>

int main()  {

    int b;
    int a;
    int sum = 0;
    int sumi = 0;

    printf("vvedite kolichestvo chisel\n");
    scanf("%d", &b);

    printf("vvedite  chisla\n");

    for(int i = 0; i < b; i++ ) {

        scanf("%d", &a);
        
        if( a % 10 == 4) {
            sum += a;
            sumi++;
        }
    }
    printf("\n");
    printf("%d\n", sum);
    printf("%d\n", sumi);

    return 0;
}