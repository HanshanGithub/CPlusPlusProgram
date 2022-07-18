#include <iostream>

using namespace std;

int main()
{
	cout << fixed;
	cout << setprecision(2);
	int money;
	cout << "Enter investment amount: ";
	cin >> money;
	double rate;
	cout << "Enter annual interest rate in percentage: ";
	cin >> rate;
	int years;
	cout << "Enter number of years: ";
	cin >> years;
	double Year = pow((1 + rate * 0.01), years);
	double gain = money * Year;
	cout << "Accumulate value is $" << gain;

	return 0;
}