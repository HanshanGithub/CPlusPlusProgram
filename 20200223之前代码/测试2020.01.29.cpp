#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 0, number = 100;
	cout << "100-1000内能同时被5/6整除的数：\n";
	while (number <= 1000)
	{
		if (number % 5 == 0 || number % 6 == 0)
		{
			if (number % 5 == 0 && number % 6 == 0)
				break;
			count++;
			if (count % 10 == 0)
				cout << setw(4) << number << endl;
			else
				cout << setw(4) << number;
		}
		number++;
	}

	return 0;
}
/*
int main()
{
	int count = 0, number = 100;
	while (number <= 1000)
	{
		if (number % 5 == 0 && number % 6 == 0)
		{
			count++;
			if (count % 10 == 0)
				cout << endl;
			else
				cout << setw(3) << number;
		}
		number++;
	}

	return 0;
}*/