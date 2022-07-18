#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 0, number = 2;
	cout << "The first 50 pime numbers are \n";
	while (count < 50)
	{
		bool isPrime = true;
		for (int divisor = 2; divisor <= number / 2; divisor++)
		{
			if (number % divisor == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
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
	int count = 0, number = 2;

	cout << "The first 50 prome numbers are \n";

	while (count < 50)
	{
		bool isPrime = true;

		for (int divisor = 2; divisor <= number / 2; divisor++)
		{
			if (number % divisor == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
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





int main()
{
	int count = 0, number = 2;

	cout << "The first 50 prime numbers are \n";

	while (count < 50)
	{
		bool isPrime = true;

		for (int divisor = 2; divisor <= number / 2; divisor++)
		{
			if (number % divisor == 0)
			{
				isPrime == false;
				break;
			}
		}
		if (isPrime)
		{
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
*/