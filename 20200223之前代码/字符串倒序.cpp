#include <iostream>
#include <string>
using namespace std;

void reverse(string number);

int main()
{
	cout << "Enter a number: ";
	string number;
	getline(cin, number);

	cout << "The number reverse is: ";
	reverse(number);

	return 0;
}

void reverse(string number)
{
	int L = number.length();
	for (L; L != 0; L--)
		//at������Ҫ��λ����ȥ1����һ���ַ�ϵͳ��Ϊ��0��
		cout << number.at(L - 1);
}