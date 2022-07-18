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
		//at里面需要总位数减去1，第一个字符系统认为是0！
		cout << number.at(L - 1);
}