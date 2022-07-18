#include <iostream>
using namespace std;

int main()
{
	const double PI = (1 + 0.00417);
	double money;
	cout << "Enter the monthly sabing amount: ";
	cin >> money;
	double month1 = money * PI;
	double month2 = (month1 + 100) * PI;
	double month3 = (month2 + 100) * PI;
	double _4 = (month3 + 100) * PI;
	double _5 = (_4 + 100) * PI;
	double _6 = (_5 + 100) * PI;
	cout << "After the sixth month, the account value is " << _6;

	return 0;
}