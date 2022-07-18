#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double number1, number2, number3, number4;
	cout << "Enter four numvers;";
	cin >>  number1 >>  number2 >>  number3 >> number4;
	double average = (number1 + number2 + number3 + number4) / 4;
	cout << "The average of " << number1 << " " << number2 << " " << number3 << "  " << number4 <<" is " << average << endl;
	//   << fixed << setprecision(5) °üº¬ÔÚiomanip¿âÄÚ

	return 0;
}