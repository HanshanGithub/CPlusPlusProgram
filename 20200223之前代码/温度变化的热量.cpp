#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed;
	cout << setprecision(0);
	double M;
	cout << "Enter the amount of water in kilograms: ";
	cin >> M;
	double temperature;
	cout << "Enter the initial temperature: ";
	cin >> temperature;
	double Temperature;
	cout << "Enter the final temperature: ";
	cin >> Temperature;
	double Q = M * (Temperature - temperature) * 4184;
	cout << "The energy needed is " << Q;
	
	return 0;
}