#include <iostream>
using namespace std;

int main()
{
	cout << "输入三角形三边a, b, c : ";
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "三角形周长等于 " << a + b + c;
	else
		cout << "输入非法信息，请重新输入";

	return 0;
}