#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j,  x, num;
	for (i = 1; i <= 8; i++)
	{
		for (j = i; j < 8; j++)
			cout << "    ";
		for (x = 1, num = 1; x <= i; x++)
		{
			cout << num <<"   ";
			num = num * 2;
		}
		for (x = 1, num = pow(2,i-1); x <= i-1; x++)
		{
			cout << num / 2 << "   ";
			num = num / 2;
		}
		cout << endl;
	}

	return 0;
}
/*int main()
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
			num-- ;
		}
		for (j = 1, num = 1; j <= i - 1; j++)
		{
			cout << num + 1 << "  ";
			num++;
		}
		cout << endl;
	}

	return 0;
}
	/*for (i = 1; i <= k; i++)
	{
		for (j = 1, num = 1; j <= i; j++ )
		{
			cout << num << " ";
			num++;
		}
		cout << endl;
		
	}
	
	return 0;
}*/
//CÓïÑÔÊä³ö**×Ö·ûÀàÐÍ
/*
#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j < i; j++)
			cout << " ";
		for (k = i; k <= (16 - i); k++)
			cout << "*";
		cout << endl; 
	}
	
	return 0;
}*/
/*
#include <iostream>
using namespace std;

int main()
{
	int i, j, m, n;
	cout << "Please enter the value of m and n: ";
	cin >> m >> n;
	if (m > 0 && n > 0)
	{
		for (i = 1; i <= m; i++)
		{
			for (j = 1; j <= n; j++)
				cout << "*";
			cout << "\n";
		}
	}
	else
		cout << "Sorry! You enter a wrong number.";

	return 0;
}
*/