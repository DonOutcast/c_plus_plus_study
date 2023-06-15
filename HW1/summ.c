#include <stdio.h>



int main() {
    
    
    int laptop = 30000; //laptop
    int chair = 15000; //chair;
    int printer = 9750; //printer
    int paper = 345; //paper

    int paper_number = 5; //number of paper
    float discount = 0.05;
    float price = ((laptop+chair+printer+(paper*paper_number))-((laptop+chair+printer+(paper*paper_number))*discount));

    printf("%10.2f\n", price);
    


    return 0;
}
