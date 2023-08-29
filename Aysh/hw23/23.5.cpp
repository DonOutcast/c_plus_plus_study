#include <iostream>
#include <string.h>
#include <iomanip>

class Employee
{
	private:
	    char fname[128];
	    char lname[128];
	    double salary;
    public:
	    Employee(const char *fname_new, const char *lname_new, double salary_new)
	{
		    strcpy(fname,fname_new);
		    strcpy(lname, lname_new);
		    this->salary = salary_new;
		}
         Employee(){
            salary = 0;
         }

        ~Employee() {;};

        double get_salary();
        void average(double s1,double s2,double s3);

};
 
int main() {
    Employee employee;
    char fname_1[128],fname_2[128],fname_3[128];
    char lname_1[128],lname_2[128],lname_3[128];
    double salary_1,salary_2,salary_3;

    std::cout << "Enter info about first employee:"<< std::endl;
    std::cin >> fname_1;
    std::cin >> lname_1;
    std::cin >> salary_1;
    Employee employee_1(fname_1,lname_1,salary_1);

    std::cout << "Enter info about second employee:"<< std::endl;
    std::cin >> fname_2;
    std::cin >> lname_2;
    std::cin >> salary_2;
    Employee employee_2(fname_2,lname_2,salary_2);

    std::cout << "Enter info about third employee:"<< std::endl;
   
    std::cin >> fname_3;
    std::cin >> lname_3;
    std::cin >> salary_3;
    Employee employee_3(fname_3,lname_3,salary_3);
    employee.average(employee_1.get_salary(),employee_2.get_salary(),employee_3.get_salary());
    return 0;
    }

    double Employee::get_salary() {
        return salary;
        }

   void Employee::average(double s1,double s2,double s3) {
        double average_salary = (s1+s2+s3) /3;
        std::cout << std::fixed << std::setprecision(2) << average_salary << std::endl;

    }