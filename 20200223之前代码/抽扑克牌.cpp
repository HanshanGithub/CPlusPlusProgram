#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int number = rand() % 13;
	cout << "Äã³éµ½µÄÅÆÊÇ£º";

	int color = rand() % 4;
	switch (color)
	{
	case 0: cout << "Ã·»¨ "; break;
	case 1: cout << "·½¿é "; break;
	case 2: cout << "ºìÌÒ "; break;
	case 3: cout << "ºÚÌÒ "; break;
	}

	switch (number)
	{
	case 0: cout << "A"; break;
	case 1: cout << "J"; break;
	case 2: cout << "2"; break;
	case 3: cout << "3"; break;
	case 4: cout << "4"; break;
	case 5: cout << "5"; break;
	case 6: cout << "6"; break;
	case 7: cout << "7"; break;
	case 8: cout << "8"; break;
	case 9: cout << "9"; break;
	case 10: cout << "10"; break;
	case 11: cout << "Q"; break;
	case 12: cout << "K"; break;
	}
	
	return 0;
}