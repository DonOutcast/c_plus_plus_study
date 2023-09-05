#include <iostream>
#include <string>

class People {
    protected:
        int decision;

    public:
       People(int dec) {
        this->decision = dec;
    }
    ~People() {;}
 
        

};
class Dentist:public People {
    private:
        std::string patient_speech;
    public:
        Dentist(int dec,std::string patient_speech_new):People(dec) {
            this->patient_speech = patient_speech_new;
        }
        ~Dentist() {;}

        void dentist_decision() {
            decision = patient_speech.find("Pain");

            if (decision == -1) {
                std::cout << "No treatment required!" << std::endl;
    }
           else {
                std::cout << "You need immediate treatment!"  << std::endl;
    }
    }
};


     

int main() {
    People people(0);
    std::string patient__speech;
    std::cout << "Dou you have any pain?" << std::endl;
    std::cin >> patient__speech;
    Dentist d(0,patient__speech);
    d.dentist_decision();
    return 0;
}
