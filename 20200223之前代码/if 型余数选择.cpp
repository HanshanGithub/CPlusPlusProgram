#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter an integer: ";
	cin >> number;
	if (number % 5 == 0)
		cout << "Hifive" << endl;
	if (number % 2 == 0)
		cout << "Hieven" << endl;

	return 0;
}