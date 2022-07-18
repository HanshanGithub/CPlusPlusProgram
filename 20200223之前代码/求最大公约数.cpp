#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the first number: ";
	int n1;
	cin >> n1;
	cout << "Enter the second number: ";
	int n2;
	cin >> n2;

	int gcd = 1, k = 2;
	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0 && n2 % k == 0)
			gcd = k;
		k++;
	}

	cout << n1 << "和" << n2 << "的最大公约数为 " << gcd;

	return 0;
}