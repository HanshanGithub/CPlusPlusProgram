


/*#include <iostream>
#include <string>
using namespace std;

void reverse(string number);

int main()
{
	cout << "Enter a number: ";
	string number;
	getline(cin, number);

	cout << "The number reverse is: ";
	reverse(number);

	return 0;
}

void reverse(string number)
{
	int L = number.length();
	for (L; L != 0; L--)
		cout << number.at(L-1);
}
*/

//判断回文。bool变量return类型没明白什么情况
/*
#include <iostream>
#include <string>
using namespace std;

int reverse(string s);
bool isP(int number);

int main()
{
	cout << "Enter the string: ";
	string s;
	getline(cin, s);
	reverse(s);

	return 0;
}

int reverse(string s)
{
	int low = 0, high = s.length() - 1;
	bool isPalindrome = true;
	while (low < high)
	{
		if (s[low] != s[high])
		{
			isPalindrome = false;
			break;
		}
		low++;
		high--;
	}

	if (isPalindrome)
		cout << s << " is a palindrome" << endl;
	else
		cout << s << " is not a palindrome" << endl;

	return 0;
}
*/

//输出五角数
/*
#include <iostream>
#include <iomanip>
using namespace std;

//定义函数组
void getPN(int n);
void PN(int count);
int n;
//建立主函数
int main()
{
	cout << "The first 100 pentagonalNumber are:	\n";

	getPN(n);

	return 0;
}

//建立五角数
void getPN(int n)
{
	//int count == 0; 放在int PN上面一行为什么输出结果不会变行？？？？
	int count = 0;

	for (int n = 1; n < 101; n++)
	{
		//int count == 0;
		int PN = n * (3 * n - 1) / 2;
		count++;
		if (count % 10 == 0)
			cout  <<setw(6)<< PN << endl;
		else
			cout << setw(6) << PN;
	}

}
*/

/*
#include <iostream>
#include <iomanip>
using namespace std;

//定义函数
void pM(int y, int m);
void pMT(int y, int m);
void pMN(int m);
void pMB(int y, int m);
int gSD(int y, int m);
int gTNOD(int y, int m);
int gNODIM(int y, int m);
bool iLY(int y);
*/

//打印某一年日历：位置不对！字符不对！输出第一排日期位置不可控
/*
#include <iostream>
#include <iomanip>
using namespace std;

//定义函数
void pM(int y, int m);
void pMT(int y, int m);
void pMN(int m);
void pMB(int y, int m);
int gSD(int y, int m);
int gTNOD(int y, int m);
int gNODIM(int y, int m);
bool iLY(int y);

//建立主函数
int main()
{
	int y, m;
	cin >> y;
	for (int m = 1; m < 13; m++)
	{
		pM(y, m);
		cout << endl << endl << endl;

	}



	//cout << "Enter full year :  ";
	//int y;
	//cin >> y;

	//cout << "Enter month in number betweenn 1 and 12: ";
	//int m;
	//cin >> m;


	return 0;
}

//建立-1函数
void pM(int y, int m)
{
	pMT(y, m);

	pMB(y, m);
}

//建立-2函数
void pMT(int y, int m)
{
	cout << "         ";
	pMN(m);
	cout << "  " << y << endl;
	cout << "-------------------------------" << endl;
	cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

}

//建立-3函数
void pMN(int m)
{
	switch (m)
	{
	case 1:cout << "January"; break;
	case 2:cout << "February"; break;
	case 3:cout << "March"; break;
	case 4:cout << "April"; break;
	case 5:cout << "May"; break;
	case 6:cout << "June"; break;
	case 7:cout << "July"; break;
	case 8:cout << "August"; break;
	case 9:cout << "September"; break;
	case 10:cout << "October"; break;
	case 11:cout << "November"; break;
	case 12:cout << "December"; break;
	}
}

//建立-4函数
void pMB(int y, int m)
{
	int sD = gSD(y, m);

	int nODIM = gNODIM(y, m);

	int i = 0;
	for (i = 0; i < nODIM; i++)
		cout << "    ";

	for (i = 1; i <= nODIM; i++)
	{
		cout << setw(4) << i;

		if ((i + sD) % 7 == 0)
			cout << endl;
	}
}

//建立-5函数
int gSD(int y, int m)
{
	int sD1800 = 3;
	int tNOD = gTNOD(y, m);

	return (tNOD + sD1800) % 7;
}

//建立-6函数
int gTNOD(int y, int m)
{
	int t = 0;
	for (int i = 1800; i < y; i++)
		if (iLY(i))
			t = t + 366;
		else
			t = t + 365;

	for (int i = 1; i < m; i++)
		t = t + gNODIM(y, i);

	return t;
}

//建立-7函数
int gNODIM(int y, int m)
{
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 31;
	 if (m == 4 || m == 6 || m == 9 || m == 11)
		return 30;

	 if (m == 2) return iLY(y) ? 29 : 28;

	return 0;
}

//建立=8函数
bool iLY(int y)
{
	return y % 4 == 0 || (y % 4 == 0 && y % 100 != 0);
}
*/