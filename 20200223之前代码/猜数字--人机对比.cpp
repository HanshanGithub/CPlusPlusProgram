#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int number = rand() % 101;
	cout << "Guess a magic number between 0 and 100: ";
	int guess = -1;                        //�����һ�β²��������������������޷�������ֻ�����������ظ���Ľ������ʱ����������⡣



	//���ֶ����Լ��㣬��Ҫ��ʱ��ȡ�� /**/���ż���

	/*
	while (guess != number)
	{
		cout << "\nEnter your guess : ";
		cin >> guess;
		if (guess == number)
			cout << "\nYes, the number is " << number ;
		cout << (guess > number ?"\nYour guess is  too higj" : "\nYour guess is too low");
		
	}
	*/


	/*
	while (guess != number)
	{
		cout << "\nEnter your guess agin: ";
		cin >> guess;
		if (guess == number)
			cout << "Yes, the number is " << number << endl;
		else if (guess > number)
			cout << "Your guess is  too higj" << endl;
		else
			cout << "Your guess is too low" << endl;
	}
	*/

	return 0;
}