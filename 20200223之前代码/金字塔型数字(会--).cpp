#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j, k, num, x;
	cout << "Enter of the lines: ";
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		for (x = 1; x <= (k - i); x++)
			cout << "   ";
		for (j = 1, num = i; j <= i; j++)
		{
			cout << setw(3) << num ;
			num--;
		}
		for (j = 1, num = 1; j <= i - 1; j++)
		{
			cout << setw(3) << num + 1 ;
			num++;
		}
		cout << endl;
	}

	return 0;
}
/*
//引用（	&	）类型求金字塔输出：line为while 条件里面的数字6
#include <iostream>
using namespace std;

void f(int& i, int num)
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
}
*/

/*                    //倒三角类型
#include <iostream>
using namespace std;

int main()
{
	int i, j, k, num, x;
	cout << "Enter of the lines: ";
	cin >> k;
	for (i = k; i != 0; i--)
	{
		for (x = k; x > i; x--)
			cout << "   ";
		//blank .
		for (j = 1, num = i; j <= i; j++)
		{
			cout << num << "  ";
			num--;
		}
		for (j = 1, num = 1; j <= i - 1; j++)
		{
			cout << num + 1 << "  ";
			num++;
		}
		cout << endl;
	}

	return 0;
}*/
//-----------------------------------------------------------------
/*
				The wrong C++.
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the line: ";
	int Line, number = 2;
	cin >> Line;   
	int line = 1;
	while ( line <= Line)
	{
		if (line != 0)
		{
			cout << line;
			line--;
		}

		else if (number <= line)
		{
			cout << number;
			number++;
		}
		cout << "\n";
		line++;
	}
	
	return 0;
}*/