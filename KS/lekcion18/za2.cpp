#include <stdio.h>

struct Prim
{
    int len;
    int wid;
}; 
struct Prim func(struct Prim var)
{
    var.len = var.len * var.wid;
    printf("%d", var.len);
}

int main()
{
    struct Prim var;

    printf("vvedite dlinu\n");
    scanf("%d", &var.len);
    printf("vvedite shirinu\n");
    scanf("%d", &var.wid);

    printf("Ploshad primaygolnica\n");
    func(var);

    return 0;
}