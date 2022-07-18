#include <iostream>
using namespace std;

int main()
{
	double son = 1, mom = 3;
	double sum = 0;
	while (mom < 100)
	{
		sum += son / mom;
		son += 2;
		mom += 2;
	}

	cout << sum;

	return 0;
}