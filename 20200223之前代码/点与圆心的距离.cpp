#include <iostream>
using namespace std;

int main()
{
	cout << "ÊäÈëµã£¨ £¬ £©:";
	double x, y;
	cin >> x >> y;
	double l = x * x + y * y;
	if (l <= 100)
		cout << "Point (" << x << ", " << y << ") is in the circle";
	else
		cout << "Äã¸ö±¿µ°";

	return 0;
}