#include <iostream>
#include <string> 

int main() {
    std::string username;
    std::cin >> username;
    std::string sym = "!@#$%^&*()<>?,.";
    int flag = 0;

    try {
        for(int i = 0;i < sym.size();i++) {
           if(username.find(sym[i]) != -1) {
               flag = 3;
               
           }
        }

        if (username[0] >= '0' && username[0] <= '9' && flag == 3) {
            throw "Username must contain only digits and numbers!" ;     
      }
        else if (flag == 3) {
            throw "WrongCharacterError";
        }
        
        else if (username[0] >= '0' && username[0] <= '9') {
           throw "FirstCharacterError";
    }
      
       else {
            std::cout << "OK" << std::endl;}
            }

    catch(const char* exception) {
        std::cout << exception << std::endl;
 }
return 0;
}