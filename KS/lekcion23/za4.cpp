#include<iostream>
#include<string.h>

class Date
{
	private:
	int day;
	char month[128];
	int year;
	public:
	Date()
	{
		day = 1;
		strcpy(month,"January");
		year = 2000;		
		}
	Date(int day_p, const char *month_p, int year_p)
	{
		day = day_p;
		strcpy(month, month_p);
		year = year_p;
		}	
	void set_print(void)
	{
		std::cout << day<< "\n";
		std::cout << month << "\n" ;
		std::cout << year;		
	}
	~Date(){;}
		
	};

int main()
{
	Date date(20, "march", 2023);
	date.set_print();
	std::cout << "\n";
	Date date1(10, "January", 1995);
	date1.set_print();
	std::cout << "\n";
    Date date2;
	date2.set_print();
		
	return 0;
	}
