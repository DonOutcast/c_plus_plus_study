#include <iostream>
#include <cstring>
class Date{
    private:
        int day;
        char month[128];
        int year;
    public:
        Date(int d, char m[], int y){
            this -> day = d;
            strcpy(month, m);
            this -> year = y;
        }
        Date(){
            day = 1;
            strcpy(month, "january");
            year = 2000;
        }
        void print_info();
        ~Date(){;}

};
int main(){
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
        date.print_info();
    } else {
        Date date;
        date.print_info();
    }
    return 0;
}
void Date::print_info(){
    std::cout << day << " " << month << " " << year << std::endl;
}