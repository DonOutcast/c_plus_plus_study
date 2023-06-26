
#include <stdio.h>


int main() {
    int a = -1;
    int count=0;
    while (a != 0)
    {
        printf("enter digit\n");
        scanf("%d", &a);
        count=a+count;

    }


    printf ("%d", count);
    

return 0;
}
