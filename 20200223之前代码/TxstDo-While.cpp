// 先执行循环体
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int data = 0;
	do
	{
		sum += data;
		cout << "Enter an integer (the input ends if it is 0): ";
		cin >> data;
	} 
	while (data != 0);
	cout << "The sum is " << sum << endl;

	return 0;
}


/*
先继续循环条件进行求值
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer (the input ends if it is 0 ): ";
	int data;
	cin >> data;
	int sum = 0;
	while (data != 0)
	{
		sum += data;
		cout << "Enter an integer (the input ends if it is 0 ); ";
		cin >> data;
	}
	cout << "The sum is " << sum;

	return 0;
}*/