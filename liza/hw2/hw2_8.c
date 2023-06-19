#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x>0 && y>0)
    {
        printf("I четверть.");
    }
    else if (x<0 && y>0)
    {
        printf("II четверть.");
    }
    else if (x<0 && y<0)
    {
        printf("III четверть.");
    }
    else if (x>0 && y<0)
    {
        printf("IV четверть.");
    }
    return 0;
}