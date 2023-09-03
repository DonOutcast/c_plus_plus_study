#include<iostream>
#include<cstring>

class People
{
	private:
	std::string doctor;
	std::string pacient;
	public:
	People(std::string doctor_p, std::string pacient_p) {
		doctor = doctor_p;
		pacient = pacient_p;
	}
	void func() {
	   int found;
	   int found1;
	   int found2;
	   found = pacient.find("bolit")!= std::string::npos;
	   found1 = pacient.find("noet")!= std::string::npos;
	   found2 = pacient.find("opuxla sheka")!=std::string::npos;
		if(found || found1 || found2) {
		    std::cout <<"srochno nuzhno lechenie";
		}
		else {
			std::cout << "lechenie ne nuzhno";
		}	 
	}
};
int main()
{
	std::string doctor;
	std::string pacient;
	std::cout<< "pacient zahodit k doctoru\n";
	getline(std::cin,doctor);
	std::cout << "pacient otvechaet\n";
	getline(std::cin,pacient);
	People people(doctor, pacient);
	people.func();
		
	return 0;
	}