#include <iostream>
using namespace std;

double L(double x1, double y1, double z1, double x2, double y2, double z2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

int main()
{
	cout << "Enter the 8 points in cubic space: " << endl;
	double points[8][3];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 3; j++)
			cin >> points[i][j];

	//«Ûæ‡¿Î
	int p1 = 0, p2 = 1;
	double minL = L(points[p1][0], points[p1][1], points[p1][2], points[p2][0], points[p2][1], points[p2][2]);

	for(int i=0;i<8;i++)
		for (int j = i + 1; j < 8; j++)
		{
			double l = L(points[i][0], points[i][1], points[i][2], points[j][0], points[j][1], points[j][2]);

			if (l < minL)
			{
				p1 = i;
				p2 = j;
				minL = l;
			}
		}

	cout << "The closest two points in cubic sapce are: (" << points[p1][0] << ", " << points[p1][1] << ", " << points[p1][2] << ") and ("
		<< points[p2][0] << ", " << points[p2][1] << ", " << points[p2][2] << ")" << endl;
	cout << "Their distance is: " << minL << endl;

	return 0;
}