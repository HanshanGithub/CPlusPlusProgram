#include <iostream>
using namespace std;

int main()
{
	cout << "����㣨 �� ��:";
	double x, y;
	cin >> x >> y;
	double l = x * x + y * y;
	if (l <= 100)
		cout << "Point (" << x << ", " << y << ") is in the circle";
	else
		cout << "�������";

	return 0;
}