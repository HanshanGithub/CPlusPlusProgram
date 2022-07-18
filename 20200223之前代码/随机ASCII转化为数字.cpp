#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	string lottery;
	srand(time(0));
	int digit = rand() % 10;
	lottery += static_cast<char>(digit + '0'); //<char>强制将后面括号的ASCII转化为了0-9的数字
	digit = rand() % 10;
	lottery += static_cast<char>(digit + '0');
	//下面加上就是随机定义3个数，可以定义N个数字
	/*
	digit = rand() % 10;
	lottery += static_cast<char>(digit + '0');
	cout << lottery; 
	*/

	return 0;
}