#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;






/*int main()
{
	int num = 1;
	int m[10][10];
	for(int i=0;i<10;i++)
		for (int j = 0; j < 10; j++)
		{
			m[i][j] = num;
			num++;
		}

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			if (j == 9)
				cout << setw(4) << m[i][j] << endl;
			else
				cout << setw(4) << m[i][j];
			
		}

	return 0;
}*/


// 求和
/*int sum(const int a[][4], int R)
{
	int total = 0;
	for (int r = 0; r < 3; r++)
	{
		for (int l = 0; l < 4; l++)
		{
			total += a[r][l];
		}
	}

	return total;
	//29行为输出sum(m,4)，此处应该为返回 总值；
	// 返回 0，需要为调用函数，
}

int main()
{
	int m[3][4];
	cout << "Enter " << 3 << " rows and " << 4 << " columns: \n";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> m[i][j];

	cout << "\nSum of all elements is " << sum(m, 4) << endl;  

	return 0;
}*/



//为二维数组赋值
/*int main()
{
	int m[4][4] =
	{
		{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,15,15,16}
	};

	int sum = 0;
	for (int i = 0; i < 4; i++)
		//sum += m[i][i];
		cout << m[i][i] << "  ";

	//cout << sum << endl;

	return 0;
}*/

//声明二维数组
/*int main()
{
	int text[5][6];
	cout << text[5][6];
	return 0;
}*/