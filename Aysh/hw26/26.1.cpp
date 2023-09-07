#include <iostream>
#include <string> 

std::string show_message (std::string st1) {
    return st1;
}

std::string show_message (std::string st1,std::string st2) {
    return st1 + " " + st2;
}
std::string show_message (std::string st1,std::string st2,std::string st3) {
    return st1 + " " + st2 + " " +st3;
}



int main() {
    std::string s1,s2,s3;
    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;
    std::cout << show_message(s1) << std::endl;
    std::cout << show_message(s1,s2) << std::endl;
    std::cout << show_message(s1,s2,s3) << std::endl;
    return 0;
}
