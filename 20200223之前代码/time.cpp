#include <iostream>
using namespace std;

int main()
{
	double number1, number2;
	cout << "Enter x and z: ";
	cin >> number1 >> number2;
	double y = number1 % number2;
	cout << "The y is " << y << endl;

	return 0;
}