#include <iostream>
#include <string.h>

class Date {
    private:
        int day;
        char month[128];
        int year;

    public:
        Date(int day_new,const char* month_new,int year_new) {
            this->day = day_new;
            strcpy(month,month_new);
            this->year = year_new;
}

Date() {
    day = 1;
    strcpy(month,"january");
    year = 2000;
}
~Date(){;};

void print();

};

int main() {
    int day_1,year_1;
    char month_1[128];
    std::cin >> day_1;
    std::cin >> month_1;
    std::cin >> year_1;
    Date date;
    if(year_1 > 2000) {
        Date date(day_1,month_1,year_1);
        date.print();
    }
    else {
        Date date;
        date.print();
    }

    return 0;
}

void Date::print() {
    std::cout << day << " " << month << " " << year << std::endl;
}

