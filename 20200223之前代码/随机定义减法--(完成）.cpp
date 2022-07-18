#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//获取在34~ 55之间的整数减法，区间定义34未得到，也得不到
int main()
{
	srand(time(0));
	int number1 = 34 + rand() % 11;
	int number2 = 34 + rand() % 11;
	int right = number1 - number2;
	//获取在区间内的数，左区间数 + 随机数 在区间范围内的数
	cout << "输入你的答案: \n";
	cout << number1 << " - " << number2 << " = ";
	int answer;
	cin >> answer;
	if (right == answer)
		cout << "You are excellent. ";
	else
		cout << " You are so careless. The ture answer is " << right;

	return 0;
}