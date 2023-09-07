#include <iostream>
#include <string>
void show_message(std::string s_1){
    std::cout << s_1 << std::endl;
}
void show_message(std::string s_1, std::string s_2){
    std::cout << s_1 << " " << s_2 << std::endl;
}
void show_message(std::string s_1, std::string s_2, std::string s_3){
    std::cout << s_1 << " " << s_2 << " " << s_3 << std::endl;
}

int main(){
    std::string s_1, s_2, s_3;
    std::cout << "String 1: ";
    std::getline(std::cin, s_1);
    std::cout << "String 2: ";
    std::getline(std::cin, s_2);
    std::cout << "String 3: ";
    std::getline(std::cin, s_3);
    show_message(s_1);
    show_message(s_1, s_2);
    show_message(s_1, s_2, s_3);

    return 0;
}
