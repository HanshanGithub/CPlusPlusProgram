#include <iostream>
using namespace std;

int main()
{
	int y;
	cout << "Enter a number: ";
	cin >>y;
	if (y >= 0)
		//单一语句{ }才可省略，否则要加括号才能计算
	{
		int x = 1;
		cout << x;
	}
		

		return 0;
}