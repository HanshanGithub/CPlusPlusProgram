#include <iostream>
using namespace std;

int main()
{
	cout << "��������������a, b, c : ";
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "�������ܳ����� " << a + b + c;
	else
		cout << "����Ƿ���Ϣ������������";

	return 0;
}