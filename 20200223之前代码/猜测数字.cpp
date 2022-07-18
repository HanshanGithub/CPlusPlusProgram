#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));												
	int lottery = rand() % 100;
	cout << "Enter your lottery pick (two digits): ";			//获取随机数
	int guess;
	cin >> guess;												//输入获取猜测数
	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;
	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;								//获取随机数和猜测数  每个数字
	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if ( guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1)
		cout << "Match all digits: you win $3,000" << endl;
	else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2
		|| guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit1)
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;
	cout << "The lottery is " << lottery;
	return 0;
}