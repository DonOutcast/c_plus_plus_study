// #include <iostream>
// struct Date{
//     int month;
//     int day;
//     int year;
// };
// void set_date(Date *f, int d, int m, int y){
//     f->day = d;
//     f->month = m;
//     f->year = y;
// }
// void print_date(Date *f){
//     std::cout << f->day << "." << f->month << "." << f->year << std::endl;
// }
// int main(){
//     struct Date today;
//     set_date(&today, 01, 01,2023);
//     print_date(&today);
//     return 0;
// }

#include <iostream>
struct Date{
    int month;
    int day;
    int year;
    void set_date(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }
    void print_date(void);
};
void Date::print_date(void){
    std::cout << day << "." << month << "." << year << std::endl;
}
int main(){
    struct Date today;
    today.set_date(17, 8, 2023);
    today.print_date();
    return 0;
}


