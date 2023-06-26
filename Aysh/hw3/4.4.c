#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("Vvedite 3 chisla:");
    scanf("%d%d%d", &a, &b, &c);
    if((a>b)&&(a>c))
    {printf("Naibolshee %d\n",a);
    }
    else if((b>a)&&(b>c))
    {printf("Naibolshee %d\n",b);}
    else {
        printf("Naibolshee %d \n",c);
    }
return 0;
}