#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int count = 0;
	int correctCount = 0;

	long startTime = time(0);
	const int NUMBER_OF_QUESTIONS = 3;
	srand(time(0));
	while (count < NUMBER_OF_QUESTIONS)
	{
		int number1 = 33 + rand() % 67, number2 = 33 + rand() % 67;
		if (number1 < number2)
		{
			int temp = number1, number2 = number1, number1 = temp;
		}
		cout << "What is " << number1 << " - " << number2 << " ? ";
		int answer;
		cin >> answer;
		if (number1 - number2 == answer)
		{
			cout << "You are corect!\n";
			correctCount++;
		}
		else
			cout << "Your answer is wrong.The really answer is " << number1 - number2 << endl;
		//下面的count在if else 外面
		count++;
	}
	long endTime = time(0);
	long testTime = endTime - startTime;
	cout << "\nCorrenct count is " << correctCount << "\nTest time is " << testTime << " seconds\n";

	return 0;
}