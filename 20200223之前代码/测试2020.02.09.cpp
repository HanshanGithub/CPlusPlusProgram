#include <iostream>
using namespace std;

int main()
{
	int j = 1;
	for (int i = 1; i < 10; i++)
	{
		
		cout << j;
		cout << ". You must do something.\n";
		j++;

	}
	

	return 0;
}


/*		//求sprt的值
#include <iostream>
using namespace std;

double sprt(int n);

int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;

	sprt(n);

	return 0;
}

double sprt(int n)
{
	double lastGuess = 1;
	double nextGuess = (lastGuess + (n / lastGuess)) / 2;
	if (lastGuess - nextGuess > 0.0001)
	{
		double lastGuess = nextGuess;
		double nextGuess = (lastGuess + (n / lastGuess) / 2);
	}

	cout << "The " << n <<" 's sprt is "<< nextGuess;


	return 0;
}
*/

/*			 //投掷色子 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void random(int number);
void answer(int end);

int main()
{
	cout << "You rolled ";
	srand(time(0));
	int number1 = 1 + rand() % 6;
	int number2 = 1 + rand() % 6;
	int end = number1 + number2;
	cout << number1 << " + " << number2 << "  = "<< end;
	answer(end);

	return 0;
}

void answer(int end)
{
	if (end == 2 || end == 3 || end == 12)
		cout << "\nYou lose.";
	if (end == 7 || end == 11)
		cout << "\nYou win.";
	if (end == 4 || end == 5 || end == 6 || end == 8 || end == 9 || end == 10)
		cout << "\npoint is " << end;
}
*/