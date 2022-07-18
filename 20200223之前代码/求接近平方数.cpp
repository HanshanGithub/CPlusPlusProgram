#include <iostream>
using namespace std;

double sprt(int n);

int main()
{
	cout << "Enter a number: ";
	int n;	cin >> n;
	sprt(n);
	return 0;
}

double sprt(int n)
{
	double lastGuess = 1;
	double nextGuess = (lastGuess + (n / lastGuess)) / 2;
	while(lastGuess - nextGuess > 0.00001 || lastGuess - nextGuess < -0.00001)
	{
		lastGuess = nextGuess;
		nextGuess = (lastGuess + (n / lastGuess)) / 2;
		//为什么只循环了一次就没了，输入n=4，lastGuess=2.5，然后就直接输出了，笔算都能对上，但没进入下一循环
		//nextGuess = (lastGuess + (n / lastGuess)) / 2; 表达式写成了nextGuess = (lastGuess + (n / lastGuess) / 2）; ！！！！结果是方程式出了问题。吐血
	}

	cout << "The " << n << " 's sprt is " << nextGuess;
	return 0;
}