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
		//Ϊʲôֻѭ����һ�ξ�û�ˣ�����n=4��lastGuess=2.5��Ȼ���ֱ������ˣ����㶼�ܶ��ϣ���û������һѭ��
		//nextGuess = (lastGuess + (n / lastGuess)) / 2; ���ʽд����nextGuess = (lastGuess + (n / lastGuess) / 2��; ������������Ƿ���ʽ�������⡣��Ѫ
	}

	cout << "The " << n << " 's sprt is " << nextGuess;
	return 0;
}