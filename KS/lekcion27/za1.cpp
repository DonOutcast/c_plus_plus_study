#include<iostream>
using namespace std;

class Fraction
{
	private:
	int chisl;
	int znam;

	public:
	Fraction( int chisl_p, int znam_p) {
		this->chisl = chisl_p;
		this->znam = znam_p;
	}
	void print (void) {
		cout << chisl <<"/"<< znam;
	}
	bool operator == (Fraction other) {
	return	(this ->chisl == other.chisl && this ->znam == other.znam);
	}
	bool operator != (Fraction other) {
		return (this ->chisl != other.chisl && this ->znam != other.znam);
	}
	bool operator >  (Fraction other) {
		return (this ->chisl > other.chisl && this-> znam > other.znam);
	}	
	bool operator < (Fraction other) {
		return (this->chisl < other.chisl && this -> znam < other.znam);
	}	
	bool operator >= ( Fraction other) {
		return (this ->chisl >= other.chisl && this -> znam >= other.znam);
	}	
	bool operator <= ( Fraction other) {
		return (this ->chisl <= other.chisl && this ->znam <= other.znam);
	}	
	Fraction(){;}
	};

int main()
{
	Fraction fac1(1,2);
	fac1.print();
	cout<< "\n";
	Fraction fac2(3,4);
	fac2.print();
	cout << "\n";
	 
	if(fac1 == fac2) {
	 cout << true;
	}
	else {
	cout << false;
	}
		cout << "\n";
	if(fac1 != fac2) {
		cout << true;
	}
	else {
		cout << false;
	}
		cout << "\n";
	if(fac1 > fac2) {
		cout << true;
	}
	else {
		cout << false;
	}
	cout << "\n";
	if(fac1 < fac2) {
	   cout << true;	
	}
	else {
		cout << false;
	}
	cout << "\n";
	if(fac1 >= fac2) {
		cout << true;
	}
	else {
	 	cout << false;
	}
	 cout << "\n";
	 if(fac1 <= fac2) {
	 	cout << true;
	}
	 else {
	  	cout << false;
	}
	 
	return 0;
	}