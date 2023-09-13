#include <iostream>
int func(int a, int b){
    return a / b;
}
int main(){
    int a, b;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    try
    {
        if (b != 0){
            func(a, b);
        } else {
            throw "division by zero";
        }
    }
    catch(const char *e)
    {
        std::cout << e << std::endl;
    }

    return 0;
}