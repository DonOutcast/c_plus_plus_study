#include <iostream>
#include <string>
class Card{
    private:
        std::string password;
    public:
        Card(std::string p){
            password = p;
        }
        ~Card(){;}
};

int main(){
    std::string password;
    std::cout << "Password: ";
    std::cin >> password;
    Card card(password);
    int a = password.find("w45");
    std::cout << a << std::endl;
    if (a == -1){
        std::cout << "Error" << std::endl;
    } else {
        std::cout << "Login completed successfully" << std::endl;
    }
    return 0;
}