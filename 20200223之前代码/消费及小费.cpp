#include <iostream>
using namespace std;

int main()
{
	double subtotal;
	cout << "Enter the subtotal and a gratuty rate: ";
	cin >> subtotal;
	double gratuityRate;
	cin >> gratuityRate;
	double x = subtotal * gratuityRate * 0.01;
	double subTotal = subtotal + x;
	cout << "The gratuity is " << x << " and total is " << subTotal;

	return 0;
}