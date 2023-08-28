#include <iostream>
#include <cstring>

class Date {
private:
    int day;
    char month[128];
    int year;

public:
    Date(int d, const char* m, int y) {
        day = d;
        strcpy(month, m);
        year = y;
    }

    Date() {
        day = 1;
        strcpy(month, "january");
        year = 2000;
    }

    void print_date() {
        std::cout << day << " " << month << " " << year << std::endl;
    }

    ~Date() {}
};

int main() {
    int day, year;
    char month[128];

    std::cout << "Day: ";
    std::cin >> day;
    std::cin.ignore(); 
    std::cout << "Month: ";
    std::cin.getline(month, 128);
    std::cout << "Year: ";
    std::cin >> year;

    if (year > 2000) {
        Date date(day, month, year);
        date.print_date();
    } else {
        Date date;
        date.print_date();
    }

    return 0;
}