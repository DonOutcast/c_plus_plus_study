#include <iostream>
#include <string>
int main(){
    std::string username;
    std::cout << "Username: ";
    std::cin >> username;
    std::string numbers = "1234567890";
    std::string symbols = "!@#$%^&*()<>?,.";
    int find = 10;
    try
    {
        {
            for (int i = 0; i < username.size(); i++){
                if (username.find(symbols[i]) != -1){
                    find = 0;
                }
            }
            for (int i = 0; i < username.size(); i++){
                if (username.find(numbers[i]) == 0){
                    throw "First character error";
                }
            }
            if (find == 0){
                throw "Wrong character error";
            }
            for (int i = 0; i < username.size(); i++){
                if (username.find(numbers[i]) != 0 && find != 0){
                    std::cout << "OK" << std::endl;
                    break;
                }
            }
        }
    }
    catch(const char *e)
    {
        std::cout << e << std::endl;
    } 
    return 0;

}