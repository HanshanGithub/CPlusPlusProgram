#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	
	int totalSeconds = time(0);
	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;

	//字母错误，影响整个程序！！
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24;
	int i;
	cout << "Enter the time zone offset to GMT: ";
	cin >> i;
	int now = currentHour + i;
	cout << "Current time is " << now << " : " << currentMinute << " : " << currentSecond;

	return 0;
}