#include <iostream>
int multiply(int x, int y){
    return x * y;
}
double multiply(double x, double y){
    return x * y;
}

int main(){
    std::cout << multiply(3, 4) << std::endl;
    std::cout << multiply(2.5, 1.5) << std::endl;

    return 0;
}