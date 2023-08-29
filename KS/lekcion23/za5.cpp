#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>

class Sotrudnik
{
	private:
	char fname[128];
	char lname[128];
	double salary;
	
	public:
	static double count;
	static double summa;
	Sotrudnik(const char *fname_p, const char *lname_p, int salary_p )
	{
	  strcpy(fname, fname_p);
	  strcpy(lname, lname_p);
	  salary = salary_p;
	   
	   summa += salary;
	   count++;
	   }
	   void set_print(void)
	   {
	   	   std::cout << fname<<"\n";
	       std::cout << lname<< "\n";
	       std::cout << salary;
	   	}
    double get_salary()
    {
    	return salary;
    	}
    void set_salary(double value)
    {
    	salary = value;  	
    }
    static double func()
    {
    	return summa/count;
    	}
    	~Sotrudnik()
    	{
    		summa -= salary;
    		count--;
    		};
	};
	double Sotrudnik::summa = 0;
	double Sotrudnik::count = 0;
int main()
{
	
	Sotrudnik sotrudnik("vital", "vitali", 120);
	sotrudnik.set_print();
	std::cout << "\n";
	Sotrudnik sotrudnik1("ivan", "ivanov", 200);
	sotrudnik1.set_print();
	std::cout << "\n";
	Sotrudnik sotrudnik2("Stas", "Petrov", 180);
	sotrudnik2.set_print();
    std::cout << "\n";
    std::cout.precision(5);
	std::cout << "srednia salary "<< Sotrudnik::func();
	std::cout<< "\n"<<"\n";


	
	sotrudnik.set_salary(130);
	sotrudnik.set_print();
	std::cout<<"\n";
	sotrudnik1.set_salary(140);
	sotrudnik1.set_print();
	std::cout <<"\n";
	sotrudnik2.set_salary(160);
	sotrudnik2.set_print();
	std::cout << "\n";
	std::cout.precision(5);
	std::cout <<"srednaia salary " <<(sotrudnik.get_salary() + sotrudnik1.get_salary()+ sotrudnik2.get_salary())/sotrudnik.count++;
	std::cout<<"\n";
	
	return 0;
	}