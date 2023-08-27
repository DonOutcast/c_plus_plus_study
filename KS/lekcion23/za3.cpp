#include<iostream>
#include<string.h>

class Student
{
	private:
	char fname[128];
	char lname[128];
	int age;
	public:
	Student(const char *fname_p, const char *lname_p, int age_p)
	{
		strcpy(fname,fname_p);
		strcpy(lname, lname_p);
		 age = age_p;
		}
	int get_age()
	{
		return age;
		}
	void set_print(void)
	{
		std::cout<< fname<< "\n";
		std::cout << lname<< "\n";
		std::cout << age;
		}
	void set_print1(void)
	{
		std::cout << fname <<" "<< lname <<" "<< age;
		
		}
	~Student(){;}
	};

int main()
{
   
	Student student("Ivan", "Ivanov", 19);
	student.set_print();
	std::cout << "\n";
	Student student1("Petr", "petrov", 20);
	student1.set_print();
	std::cout << "\n";
	if(student.get_age() > student1.get_age())
	{
		student.set_print1();
		}
	else if(student1.get_age()> student.get_age())
	{
		 student1.set_print1();
		}
	else if (student1.get_age() == student.get_age())
	{
		std::cout << "vozrasta odinakovie";	
		}
	return 0;
	}