#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer, the input ends if it is 0:";
	double number1;
	cin >> number1;
	double count1 = 0, count2 = 0, count3 = 0;
	//定义正负数，总个数
	double sum = 0;
	if (number1 != 0)
	{
		while (number1 != 0)
		{
			if (number1 > 0)
				count1++;
			else
				count2++;
			sum += number1;
			count3++;
			cin >> number1;
		}
		cout << "The number of positives is " << count1 << endl;
		cout << "The number of negatives is " << count2 << endl;
		cout << "The total is " << count3 + 1 << endl;
		double average = sum / count3;
		cout << "The average is " << average;
	}
	//寻找正负数，总个数，个数之和。
	else
		cout << "No numbers are entered except 0";
	
	return 0;
}