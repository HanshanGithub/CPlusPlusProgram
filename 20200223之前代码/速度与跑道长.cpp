#include <iostream>
using namespace std;

int main()
{
	double v, a;
	cout << "Enter speed and acceleration: ";
	cin >> v >> a;
	double length = v * v / 2 / a;
	cout << "The minimum runway length for this airplane is " << length;

	return 0;
}