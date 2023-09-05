#include <iostream>
#include <string>

class People {
protected:
    std::string speech;

public:
    People(std::string &speech) : speech(speech) {}

    void treat() {
        int found = speech.find("pain");
        if (found != -1) {
            std::cout << "Doctor: Immediate treatment is required!" << std::endl;
        } else {
            std::cout << "Doctor: You did not mention any pain. You can go home." << std::endl;
        }
    }
};

int main() {
    std::cout << "Doctor: Hello! Could you describe your feelings?" << std::endl;
    std::string patient_Speech;
    std::cout << "Patient: ";
    std::getline(std::cin, patient_Speech);

    People dentist(patient_Speech);
    dentist.treat();

    return 0;
}

