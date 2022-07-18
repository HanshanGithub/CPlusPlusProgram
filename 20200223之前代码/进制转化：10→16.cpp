#include <iostream>
using namespace std;

int main()
{
	cout << "输入一个数字0-16之间：";
	int n;
	cin >> n;
	if (n > 9 && n < 17)
	{
		char N = static_cast<char>('A' + n - 10);
		cout << N;
	}
	else if (n < 10)
		cout << n;
	else
		cout << "请再读一次要求。";

	return 0;
}