#include <iostream>
#include <iomanip>
using namespace std;

void add(const double a[][3], const double b[][3], double c[][3]);
double a[3][3], b[3][3], c[3][3];

int main()
{
	cout << "Enter matrix1: ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	cout << "Enter matrix2: ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> b[i][j];

	add(a, b, c);

	return 0;
}

void add(const double a[][3], const double[][3], double[][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];

	cout << "The addition of the matrices: " << endl;
	for (int i = 0; i < 3; i++)
	{


		for (int j = 0; j < 3; j++)
			cout << setw(4) << left << c[i][j];

	}
}