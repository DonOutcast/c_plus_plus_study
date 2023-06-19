    
#include <stdio.h>

    int main(){
    float price_laptop = 30000;
    float price_computer_chair =15000;
    float price_printer = 9750;
    float price_pack_paper =345;
    float price_result= price_laptop+price_computer_chair+price_printer+(5*price_pack_paper);
    float sale=5;
    float result=price_result-((price_result*sale)/100);
    printf("%10.2f\n",result);
    
    }
