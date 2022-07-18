#include <iostream>
using namespace std;

int main()
{
	cout << "Enter year: ";
	int year;
	cin >> year;
	cout << "Enter month: ";
	int  m;
	cin >> m;
	cout << "Enter the day of the month: ";
	int q;
	cin >> q;
	if (m < 3 && m != 0)
		m += 12, year -= 1;
	int j = (year ) / 100, k = (year ) % 100;
	int h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
	cout << "Day of the week is  ";
	switch (h)
	{
	case 0: cout << "Saturday"; break;
	case 1: cout << "Sunday"; break;
	case 2: cout << "Monday"; break;
	case 3: cout << "Thuesday"; break;
	case 4: cout << "Wendsday"; break;
	case 5: cout << "Thursday"; break;
	case 6: cout << "Friday"; break;
	}

	return 0;
}

	/*
	理论上运行这个也是可以的啊
	{
		int j = (year - 1) / 100, k = (year - 1) % 100;
		int h = (q + 26 * (m + 12) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;  ///m + 12 跟m += 12有什么区别呢，我将前面的代换进入了表达式，怎么就出问题了
		cout << "Day of the week is  ";
		switch (h)
		{
		case 0: cout << "Saturday"; break;
		case 1: cout << "Sunday"; break;
		case 2: cout << "Monday"; break;
		case 3: cout << "Thuesday"; break;
		case 4: cout << "Wendsday"; break;
		case 5: cout << "Thursday"; break;
		case 6: cout << "Friday"; break;
		}
	}
	else 
	{
		
		int h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
		cout << "Day of the week is  ";
		switch (h)
		{
		case 0: cout << "Saturday"; break;
		case 1: cout << "Sunday"; break;
		case 2: cout << "Monday"; break;
		case 3: cout << "Thuesday"; break;
		case 4: cout << "Wendsday"; break;
		case 5: cout << "Thursday"; break;
		case 6: cout << "Friday"; break;
		}
	}

*/

