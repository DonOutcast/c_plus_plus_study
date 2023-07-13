#include <stdio.h>
#include <locale.h>

float func(int a[10]) {
    int summ = 0; 
    float sred = 0;
    for(int i = 0; i < 10; i++) {
        summ += a[i];
    }
    sred = (float)summ /10;
    return sred;
}

int func2(int a[10])  {
    int count = 0;
    for(int i = 0; i < 10; i++)  {
        if(a[i] > func(a))  {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)  {
        scanf("%d", &a[i]);
    }
    
    printf("%10.2f\n", func(a));
    printf("%d", func2(a));

    return 0;
}