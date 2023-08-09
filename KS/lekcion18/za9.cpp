#include <stdio.h>

struct Point
{
    int x;
    int y;
    char c;
    int count = 0;
};
int main()
{
    struct Point var[5];
    struct Point counter;

    for(int i = 0; i < 5; i++)
    {
        printf("vvedite coordinati %d\n", i+1);
        printf("vvedite x ");
        scanf("%d", &var[i].x);
        printf("vvedite y ");
        scanf("%d", &var[i].y);
        printf("vvedite color ");
        scanf("%s", &var[i].c);
    
        if(var[i].c =='r' && var[i].x < 10)
        {
            counter.count++;
        }
    }
     printf("colichestvo %d",counter.count);
    return 0;
}