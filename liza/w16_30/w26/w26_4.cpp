#include <iostream>
int divide(int x, int y){
    return x / y;
}
double divide(double x, double y){
    return x / y;
}
int main(){
    std::cout << divide(10, 2) << std::endl;
    std::cout << divide(7.5, 1.5) << std::endl;

    return 0;
}