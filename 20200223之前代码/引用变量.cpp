#include <iostream>
using namespace std;

/*void minMax(double a, double b, double& min, double& max)
//										"  &	"字符的意义何在？？？？？
{
	double(a < b ? min = a, max = b : (min = b, max = a));
}

int main()
{
	double a = 5, b = 6, min, max;
	minMax(a, b, min, max);

	cout << "min is " << min << " and max is " << max << endl;

	return 0;
}*/
/*
void f(int i, int num)
{
	for (int j = 1; j <= i; j++)
	{
		cout << num << "  ";
		num *= 2;
	}
	cout << endl;
}

int main()
{
	int i = 1;
	while (i <= 6)
	{
		f(i, 2);
		i++;
	}
	return 0;
}*/

/*
//
int main()
{
	int count = 1;
	int& r = count;
	cout << "count is " << count << endl;
	cout << "r is " << r << endl;

	r++;
	cout << "\ncount is " << count << endl;
	cout << "r is " << r << endl;

	count = 10;
	cout << "\ncount is " << count << endl;
	cout << "r is " << r << endl;

	return 0;
	//输出的R和N都是一个值
}*/

/*void increment(int& n)
{
	n++;
	cout << "\n\tn inside the function is " << n << endl;
}

int main()
{
	int x = 1;
	cout << "Before the call, x is " << x << endl;
	increment(x);
	cout << "\nAfter the call, x is	" << x << endl;

	return 0;
	// 引用变量 & 的效果
}*/

void in(int n)// in = increment,缩写
{
	n++;
}

int main()
{
	int x = 1;
	int y = 1;

	in(x);
	in(y);

	cout << "x is " << x << endl << "y is " << y<<endl;
	system("pause");
	return 0;
}