#include <iostream>
#include <cmath>
using namespace std;

double L(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
	double points[8][2];
	cout << "Enter 8 points:	";
	for (int i = 0; i < 8; i++)
		cin >> points[i][0] >> points[i][1];

	int p1 = 0, p2 = 1;
	double minL = L(points[p1][0], points[p1][1], points[p2][0], points[p2][1]);

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			double l = L(points[i][0], points[i][1], points[j][0], points[j][1]);
			if (minL > l)
			{
				p1 = i;
				p2 = j;
				minL = l;
			}
		}
	}

	//寻找最小值相同的点

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			double l = L(points[i][0], points[i][1], points[j][0], points[j][1]);
			if (minL == l)
			{
				cout << "The closest two points are (" << points[i][0] << ", " << points[i][1] << ") and (" << points[j][0] << ", " << points[j][1] << ")\n";
			}
		}
	}

	cout << "Their distance is " << minL << endl;

	//cout << "The cousest two points are " << "(" << points[p1][0] << ", " << points[p1][1] << ") and (" << points[p2][0] << ", " << points[p2][1] << ")" << endl;

	return 0;
}