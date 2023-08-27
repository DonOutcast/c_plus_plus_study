#include<iostream>
#include<math.h>

class Point
{
	private:
	double x;
	double y;
	public:
	 double Metod()
	{
		double x2;
		double y2;
		x = 0;
		y= 0;
		std::cin >> x2; 
		std::cin >> y2;
		return sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));	
		}
	Point()
	{
		double result;
		double x2;
		double y2;
	 	x = 0;
		y = 0;
		std::cin >> x2; 
		std::cin >> y2;
		result= sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
		std::cout << result;
		}	
	};
int main()
{
	Point point;
	std::cout << "\n";
	std::cout << point.Metod();	
	return 0;
	}
