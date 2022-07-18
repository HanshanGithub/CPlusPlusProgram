#include <iostream>
using namespace std;

//ASCII转化为参数
int main()
{
	cout << "输入一个ASCII的值，（ASCII值在0-127之间的整数）: ";
	int x;
	cin >> x;
	char X = static_cast<char>(x);
	cout << x << "对应的数字为  " << endl << X;

	return 0;
}


//参数转化为ASCII
/*
#include <iostream>
using namespace std;

int main()
{
	cout << "输入一个ASCII的值，（ASCII值在0-127之间的整数）: ";
	char x;
	cin >> x;
	int X = static_cast<char>(x);
	cout << x << "对应的数字为  " << endl << X;

	return 0;
}*/