#include <iostream>
void print(int x){
    std::cout << x << std::endl;
}
void print(double x){
    std::cout << x << std::endl;
}
void print(std::string x){
    std::cout << x << std::endl;
}

int main(){
    print(5);
    print(5.2);
    print("five");

    return 0;
}