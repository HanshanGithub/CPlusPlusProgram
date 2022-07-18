#include <iostream>
using namespace std;

int main()
{
	//输出工作时间
	cout << "Enter the everyone work time: " << endl;
	int time[8][7];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 7; j++)
			cin >> time[i][j];

	//建立并求和每人工作时间
	int sum[8], who[8];
	for (int i = 0; i < 8; i++)
		sum[i] = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			sum[i] += time[i][j];
			who[i] = sum[i];
		}
	}

	//对工作时间排序
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 7; j++)
			if (sum[j] > sum[j + 1])
			{
				//swap nums[j] with nums[j + 1];
				int tem = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = tem;
				changed = true; //运行到最后一个，肯定为真。
			}
	} while (changed);

	//输出人员及工作时间
	for (int i = 7, j = 0; i >= 0; i--, j++)
	{
		//cout << "The worker " << j << " have " << sum[i] << " work time." << endl;
		cout << "The worker ";
		for (int j = 0; j < 8; j++)
			if (sum[i] == who[j])
			{
				cout << j;
				break;
			}
		cout << " have " << sum[i] << " work time." << endl;
	}

	return 0;
}
