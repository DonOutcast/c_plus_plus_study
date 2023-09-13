#include <iostream>
#include <string>
int main(){
    std::string password;
    std::cout << "Pass: ";
    std::cin >> password;
    std::string symbols = "!@#$%^&*()<>?,.";
    int find = 10;
    try
    {
        for (int i = 0; i < symbols.size(); i++){
            if (password.find(symbols[i]) != -1){
                find = 0;
            }
        }
        if (find != 0){
            throw "No special characters error";
        }
        if (password.size() < 6){
            throw "Min length password error";
        }
    }
    catch(const char *e)
    {
        std::cout << e << '\n';
    }
    return 0;
}