#include <iostream>
#include <string.h>

class Student
{
	private:
	    char fname[128];
	    char lname[128];
	    int age;
	public:
	    Student(const char *fname_new, const char *lname_new, int age_new)
	{
		    strcpy(fname,fname_new);
		    strcpy(lname, lname_new);
		    this->age = age_new;
		}

        ~Student(){;};

        int get_age();
        void print();
};
	
int main() {
    char firstname_1[128], firstname_2[128];
    char lastname_1[128], lastname_2[128];
    int age_1,age_2;
    std::cin >> firstname_1;
    std::cin >> lastname_1;
    std::cin >> age_1;
    std::cin >> firstname_2;
    std::cin >> lastname_2;
    std::cin >> age_2;
    Student student_1(firstname_1,lastname_1,age_1);
    Student student_2(firstname_2,lastname_2,age_2);
    if(student_1.get_age() > student_2.get_age()) {
        student_1.print();
    }
    else if(student_1.get_age() < student_2.get_age()) {
        student_2.print();
    }
   return 0;
    }

         int Student::get_age() {
             return age;
        }
        void Student::print()
	{
		    std::cout << fname << " " << lname << " " << age <<" years" <<std::endl;
		    
	}
