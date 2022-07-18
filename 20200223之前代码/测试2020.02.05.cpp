



/*
可以看作为：套用模板进行计算最大公约数
#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
	int gcd = 1, k = 2;

	while (k <= n1 && k <= n2)
	{
		if (n1 % k == 0 && n2 % k == 0)
			gcd = k;
		k++;
	}
	return gcd;
}

int main()
{
	cout << "Enter the first integer: ";
	int n1;
	cin >> n1;
	cout << "Enter the second integer: ";
	int n2;
	cin >> n2;
	cout << "The greatest common divisor for " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;

	return 0;
}
*/
//-------------------------------------------------------------------------------------------
/*
#include <iostream>
using namespace std;

void printGrade(double score)
{
	if (score >= 90.0)
		cout << 'A' << endl;
	else if (score >= 80.0)
		cout << 'B' << endl;
	else if (score >= 70.0)
		cout << 'C' << endl;
	else if (score >= 60.0)
		cout << 'D' << endl;
	else
		cout << 'F' << endl;
			
	//return 0;不见了
}

int main()
{
	cout << "Enter a score: ";
	double score;
	cin >> score;

	cout << "The grade is ";
	printGrade(score);

	return 0;
}
*/
//--------------------------
/*
//定义最大值max函数
#include <iostream>
using namespace std;

int max(int num1, int num2)
{
	int result;

	int(num1 > num2 ? result = num1 : result = num2);

	return result;
}

int main()
{
	int i = 5, j = 2;
	int k = max(i, j);

	cout << "The maximum betwwen " << i << " and " << j << " is " << k << endl;

	return 0;
}			*/