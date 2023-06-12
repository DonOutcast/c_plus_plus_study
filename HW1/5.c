#include <stdio.h>



int main() {
    
    
    float price ;
    printf ("input price:");
    scanf ("%f", &price);
    float discount = 0.05;
    float fprice = ((price)-(price*discount));

    printf ("%10.2f\n", fprice);
    


    return 0;
}
