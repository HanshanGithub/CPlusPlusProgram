#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int average(const int array[], int size);
double average(const double array[], double size);


int main()
{
	
	double n[10];
	

	average(n, 10);

	return 0;

	/*int n, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		sum += n;
	}
	cout << "The 10 numbers average is " << sum / 10;*/

}

double average(const double array[], double size)
{
	cout << "Enter 10 numbers: ";
	double sum = 0;
	double n[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> n[i];
		sum += n[i];
	}
	cout << sum / 10;

	return 0;
}