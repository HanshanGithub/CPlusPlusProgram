#include <iostream>
using namespace std;

int main()
{
	cout << "����һ������0-16֮�䣺";
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
		cout << "���ٶ�һ��Ҫ��";

	return 0;
}