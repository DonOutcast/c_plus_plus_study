#include<stdio.h>
#include<math.h>

struct Kompl
{
    int numd;
    int numm;
};
struct Kompl func(struct Kompl summa, struct Kompl var)
{
    struct Kompl result;
    result.numd = summa.numd + var.numd;
    result.numm = summa.numm + var.numm;
   
   return result;

}
int main()
{
   struct Kompl var;
   struct Kompl summa;

   printf("vvadite destvitelnuy chast\n");
   scanf("%d", &var.numd);
   printf("vvedite mnimuy chast\n");
   scanf("%d", &var.numm);
   printf("vvadite vtoroe destv chast\n");
   scanf("%d", &summa.numd);
   printf("vvedite vtoroe mnim chast\n");
   scanf("%d", &summa.numm);

   struct Kompl result = func(summa, var);
   printf("%d\n", result.numd);
   printf("%d", result.numm);

    return 0;
}