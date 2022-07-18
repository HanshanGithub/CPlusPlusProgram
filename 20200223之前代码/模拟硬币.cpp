#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int count0 = 0, count1 = 0;
	int n;
	cout << "输入模拟投掷硬币次数：";
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		int index = rand() % 2;
		(index == 0 ? count0++ : count1++);
	}
	cout << "正面: " << count0 << " 次" << endl;
	cout << "反面: " << count1 << " 次" << endl;

	return 0;
}
//为什么一百万次无法运行？？？
// 输入值运算又能行
