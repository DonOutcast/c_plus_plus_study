#include <iostream>
#include <iomanip>
class Curs
{
    private:
    double price;
    public:
    static double dollar;
    static double euro;
    static double lira;
    void set_perevod();

};
double Curs::dollar{60.5};
double Curs::euro{35.8};
double Curs::lira{0.85};

int main()
{
    Curs curs;
    curs.set_perevod();

    return 0;
}
void Curs :: set_perevod()
{
    int count;
    std::cout << "skolko y vas rublei\n";
    std::cin >> price;
    std::cout << "vvedite tip valuti 1) dollar = 60.5, 2) euro = 35.8, 3)lira = 0.85\n";
    std::cin >> count;
    if(count == 1) {
        price = price / dollar;
        std::cout.precision(4);
        std::cout << "po kursu y vas "<< price << " dollars\n"; 
    }
    if(count == 2) {
        price = price / euro;
        std::cout.precision(4);
        std::cout << "po kursu y vas " << price << " euros\n"; 
    }   
    if(count == 3) {
        price = price / lira;
        std::cout.precision(4);
        std::cout << "po kursu y vas " << price << " liras\n"; 
    }
}