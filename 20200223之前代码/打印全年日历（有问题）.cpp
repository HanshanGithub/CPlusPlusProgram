
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
	cout << "Enter the year: ";
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
