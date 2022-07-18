#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "分别输入被除数和除数 ";
	cin >> i;

	int j;
	cin >> j;
	cout << i << " 除以 " << j << " 的余数为 " << i % j;
	return 0;

}