#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

void m(int, int[]);

int main()
{
	int x = 1;
	int y[10];
	y[0] = 1;
	m(x, y);

	cout << "x is " << x << endl;
	cout << "y[0] is " << y[0] << endl;

	return 0;
}

void m(int number, int numbers[])
{
	number = 1001;
	numbers[0] = 5555;
}




/*
int main()
{
	cout << "Enter a sentence: ";
	string s;
	cin >> s;
	cout << s.length();
	return 0;
}
*/

/*
int main()
{
	srand(time(0));
	int c = 0;

	for (int i = 0; i < 40; i++)
	{ 
		int n = 1 + rand() % 99;
		c++;
		if (c % 10 == 0)
			cout << setw(4) << n << endl;
		else
			cout << setw(4) << n;
		
	}

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

void increment(int n) //void increment(int& n)  结果不一样
{
	n++;
	cout << "\tn inside the function is " << n << endl;
}

int main()
{
	int x = 1;
	cout << "Before the call, x is " << x << endl;
	increment(x);
	cout << "after the call, x is " << x << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a sentence: ";
	string s;
	cin >> s;
	cout << s.length();
	//不能识别空格“ ”输出显示会忽略空格后面的字符。

	return 0;
}
*/