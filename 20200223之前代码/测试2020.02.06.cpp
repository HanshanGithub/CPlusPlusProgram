#include <iostream>
using namespace std;

const double PI = 3.14159;

double getArea(double radius)
{
	return radius * radius * PI;
}

void displayArea(double radius)
{
	cout << getArea(radius) << endl;
}

int main()
{
	double r1 = 1, r2 = 10;
	cout << getArea(r1) << endl; //				displayArea(r1);
	displayArea(r2);
}





/*
#include <iostream>
using namespace std;

void t1();

int main()
{
	t1();
	t1();
	t1();

	return 0;
}

void t1()
{
	int x = 1;
	static int y = 1;
	x++;
	y++;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	cout<<endl;
}
*/

/*
#include <iostream>
using namespace std;
	
void t1();
void t2();

int main()
{
	t1();
	t2();

	return 0;
}

int y;

void t1()
{
	int x = 1;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	x++;
	y++;
}

void t2()
{
	int x = 1;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}
*/

/*   
//return 类型求前50个质素
#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int number)
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{ 
			return false;
		}
	}
	return true;
}

void printPrimeNumbers(int numberOfPrimes)
{
	const int NUMBER_OF_PRIMES = 50, NUMBER_OF_PRIMES_PER_LINE = 10;
	int count = 0, number = 2;

	while (count < numberOfPrimes)
	{
		if (isPrime(number))
		{
			count++;
			if (count % 10 == 0)
				cout << setw(4) << number << endl;
			else
				cout << setw(4) << number;
		}
		number++;
	}
	
}
int main()
{
	cout << "The first 50 Prime numbers are \n";
	printPrimeNumbers(50);

	return 0;
}
*/