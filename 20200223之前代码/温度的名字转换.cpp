#include <iostream>
using namespace std;

int main()
{
	double Celsius;
	cout << "Enter a degree in Celsius: " ;
	cin >> Celsius;
	double fahrenheit = (9.0 / 5) * Celsius + 32;
	cout << Celsius << " Celsius is " << fahrenheit << " Fahrenheit";
	return 0;

}