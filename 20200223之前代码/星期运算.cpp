#include <iostream>
using namespace std;

int main()
{
	cout << "周日：0， 周一： 1，周二：2 ...以此类推" << endl;
	cout << "输入代表今天的数字: ";
	int number0;
	cin >> number0;
	cout << "输入距离今天多少天: ";
	int number;
	cin >> number;
	//number代表距离今天多久				8
	cout << "Today is ";

	switch (number0)
	{
	case 0: cout << " Sunday"; break;
	case 1: cout << " Monday"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	}

	//number0 代表今天的星期	2

	int zhouqi = (number0 + number) % 7;	//			8
	cout  << " and the future day is ";
	switch (zhouqi)
	{
	case 0: cout <<  " Sunday"; break;
	case 1: cout << " Mondat"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	}

	return 0;
}