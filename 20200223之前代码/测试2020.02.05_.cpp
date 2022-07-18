


//模拟硬币投掷次数
/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int count_0 = 0, count_1 = 0;
	int num = rand() % 2;
	int inital = 0;

	while (inital < 1000000)
	{
		if (num - 1 != 0)
			count_0++;
		else
			count_1++;
		inital++;
	}

	cout << "The 0 is: " << count_0 << endl;
	cout << "The 1 is: " << count_1 << endl;

	return 0;
}
*/