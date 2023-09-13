#include <iostream>
#include <string>
class People{
    private:
        std::string speech;
    public:
        People(std::string words){
            speech = words;
        }
        ~People(){;}
        void speech_verification();
};

int main(){
    std::string words;
    std::cout << "Dentist: Everything okay?" << std::endl;
    std::cout << "Patient: ";
    std::getline(std::cin, words);
    People person(words);
    person.speech_verification();

    return 0;
}

void People::speech_verification(){
    int pain = speech.find("pain");
    if (pain != -1){
        std::cout << "Immediate treatment" << std::endl;
    } else {
        std::cout << "Goodbye!" << std::endl;
    }
}
