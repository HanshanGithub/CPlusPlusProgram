#include <iostream>
using namespace std;

int main()
{
	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4:  ";
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	double a = y1 - y2, b =  x2 - x1, c = y3 - y4, d =  x4 - x3;
	double e = a * x1 + b * y1, f = c * x3 + d * y3;
	
	if (-a * d + b * c == 0)
		cout << "The two lines are parallel.";
	else
	{
		double x = (e * d - b * f) / (a * d - b * c), y = (a * f - e * c) / (a * d - b * c);
		cout << "The intersecting point is at (" << x << ", " << y << ")";
	}

	return 0;
}