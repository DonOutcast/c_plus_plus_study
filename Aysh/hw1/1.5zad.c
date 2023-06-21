#include <stdio.h>
int main() 
{  
    float price;
    
    printf("Vvedite price:");
    scanf("%f", &price);
    printf("Discount price: %10.2f\n",0.95*price);

    return(0);
}