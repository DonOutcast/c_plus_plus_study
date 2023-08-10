#include<stdio.h>
#include<math.h>

struct Kompl
{
    float x;
    float y;
};

struct Kompl func(struct Kompl rast, struct Kompl var)
{
    struct Kompl otv;
    otv.x = sqrt((rast.x - var.x)*(rast.x - var.x) + (rast.y - var.y)*(rast.y - var.y));
    return otv; 
}
int main()
{
   struct Kompl var;
   struct Kompl rast;
   
   printf("vvadite x1\n");
   scanf("%f", &var.x);
   printf("vvedite y1\n");
   scanf("%f", &var.y);
   printf("vvadite x2\n");
   scanf("%f", &rast.x);
   printf("vvedite y2\n");
   scanf("%f", &rast.y);

   struct Kompl result = func(rast, var);
    printf("%f", result.x);

    return 0;
}