#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << " Enter a number between 0 and 1000: ";
	cin >> number;      //56	122		
	int i = number % 10;//6		2		  
	int j = number / 10;//5		12
	int I = j % 10;     //5		2
	int J = j / 10;     //0		1
	int z = i + I + J;  //12	5
	cout << "The sum of the digits is " << z;

	return 0;
}