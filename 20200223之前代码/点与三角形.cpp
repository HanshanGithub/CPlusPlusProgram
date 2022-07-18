#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a point's x- and y- coordinates: ";
	double x, y;
	cin >> x >> y;
	double a = 100, b = 200, e = -200 * 100;
	if (a * x + b * y + e < 0 && x > 0 && y > 0)
		cout << "The piont is in the triangle.";
	else
		cout << "The piont is not in the triangle.";

	return 0;
}