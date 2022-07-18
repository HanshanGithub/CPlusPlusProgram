#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a year: ";
	int year;
	cin >> year;
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	//使用布尔表达式的好处在哪里？
	// bool 换成int 计算结果暂时一样，未清楚bool的真正意义
	if (isLeapYear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is a not leap year" << endl;

	return 0;
}