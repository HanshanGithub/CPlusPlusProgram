#include <iostream>
using namespace std;

double mean(const double x[], int size);
double deviation(const double x[], int size);
double nums[10], Mean;


int main()
{
	cout << "Enter ten numbers: ";

	mean(nums, 10);

	deviation(nums, 10);

	return 0;
}

double mean(const double x[], int size)
{
	
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
		sum += nums[i];
	}
	 Mean = sum / 10;
	 cout << "The mean is " << Mean << endl;
	return 0;
}

double deviation(const double x[], int size)
{
	double Sum = 0;
	for (int i = 0; i < 10; i++)
	{
		Sum += pow(nums[i] - Mean, 2);
	}
	cout << "The standard deviation is " << sqrt(Sum / 9);
	return 0;
}