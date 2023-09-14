#include <iostream>
int main(){
    int a = 5;
    int b = 0;
    try 
    {       
        if (b == 0){
            throw "division by zero";
        }
    }
    catch(const char *exception)
    {
        std::cout << "Error" << std::endl;
    }

    return 0;
}