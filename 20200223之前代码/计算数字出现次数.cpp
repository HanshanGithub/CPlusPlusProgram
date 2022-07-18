#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//int count[10] = { 0,0,0,0,0,0,0,0,0,0 };
int main()
{
	int nums[100];
	int counts[10] = { 0,0,0,0,0,0,0,0,0,0 };

	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		nums[i] = rand() % 10;
	}

	for (int i = 0; i < 100; i++)
	{
		if ((i + 1) % 10 == 0)
			cout << nums[i] << " " << endl;
		else
			cout << nums[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 100; i++)
	{
		counts[nums[i - 0]]++;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << j << ":" << counts[j]<<"  ";
	}
}