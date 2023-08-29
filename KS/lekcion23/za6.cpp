#include<iostream>

class Pramoug
{
	private:
	int weidth;
	int haigh;
	public:
	Pramoug(int weidth_p, int haigh_p)
	{
		weidth = weidth_p;
		haigh = haigh_p;
		std::cout << "weidth "<<weidth_p <<"\n";
		std::cout << "haigh "<<haigh_p;
			
	}
	int Metod()
	{
		return weidth * haigh;	
	}
	~Pramoug(){;}
	};
int main()
{
	Pramoug pramoug(2,3);
	std::cout << "\n";
	std::cout <<"ploshad "<< pramoug.Metod();
	std::cout << "\n";
	Pramoug pramoug1(1, 4);
	std::cout << "\n";
	std::cout <<"ploshad "<< pramoug1.Metod();
	std::cout<< "\n";
	if(pramoug.Metod() > pramoug1.Metod())
	{
		std::cout << pramoug.Metod();
    }
	else
	{
		std::cout << pramoug1.Metod();
	}
	return 0;
	}