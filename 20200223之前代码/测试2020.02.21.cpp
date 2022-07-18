#include <iostream>
#include <iomanip>
using namespace std;




//矩阵相乘
//  +号，=号没法带进去，若要显示，则需要将每个数字表达出来，太过复杂且有规律
/*void add(const double a[][3], const double b[][3], double c[][3]);
double a[3][3], b[3][3], c[3][3];

int main()
{
	cout << "Enter matrix1: ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	cout << "Enter matrix2: ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> b[i][j];

	add(a, b, c);

	return 0;
}

void add(const double a[][3], const double[][3], double[][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];

	cout << "The addition of the matrices: " << endl;
	for (int i = 0; i < 3; i++)
	{


		for (int j = 0; j < 3; j++)
			cout << setw(4) <<left<< c[i][j];
		
	}
}*/



//覆盖cout<<" *** ";类型的固定字符输出
/*int main()
{
	cout << setw(20) <<left<< "well come" << "...";

	return 0;
}*/


//对角线之和
/*int main()
{
	cout << "Enter a 4-by-4 matrix row by row: " << endl;
	int m[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> m[i][j];

	int sum = 0;
	int mus = 0;
	for (int i = 0, j = 3; i < 4; j--, i++)
	{
		sum += m[i][i];
		mus += m[i][j];
	}

	cout << "Sum of the elements in the major diagonal is " << sum << endl;
	cout << "Sum of the elements in the major diagonal is " << mus << endl;

	return 0;
}*/


//按列求二维数组和
/*int main()
{
	double m[3][4];
	cout << "Enter a 3-by-4 matrix row by row: " << endl;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> m[i][j];

	for (int i = 0; i < 4; i++)
	{
		double sum = 0;
		for (int j = 0; j < 3; j++)
			sum += m[j][i];
		cout << "Sum of the elements at column " << i << " is " << sum << endl;
	}

	return 0;
}*/