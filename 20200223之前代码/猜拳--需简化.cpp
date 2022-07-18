#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int Number = rand() % 3;
	cout << "Enter a number, scissor(0), rock(1), paper(2):  ";
	int number;
	cin >> number;
	cout << "The computer is ";
	switch (Number % 3)
	{
	case 0: cout << "scissor."; break;
	case 1: cout << "rock."; break;
	case 2: cout << "paper."; break;
	}
	if (number == 0)
	{
		switch (Number)
		{
		case 0: cout << "You are scissor too. It is a draw."; break;
		case 1: cout << "You are scissor. You fail."; break;
		case 2: cout << "You are scissor. You won."; break;
		}
	}
	else if (number == 1)
		switch (Number)
		{
		case 0: cout << "You are rock. You won. "; break;
		case 1: cout << "You are rock too. It is a draw."; break;
		case 2: cout << "You are rock. You fail."; break;
		}
	else if (number == 2)
		switch (Number)
		{
		case 0: cout << "You are paper. You faii. "; break;
		case 1: cout << "You are paper  Won."; break;
		case 2: cout << "You are paper too. It is a draw."; break;
		}
	else

		return 0;
}