#include <iostream>
using namespace std;

bool isUp(const int list[], int size);
int n, list[80];

int main()
{
	cout << "Enter list: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> list[i];

	isUp(list, n);

	return 0;
}

bool isUp(const int list[], int size)
{
	bool isUp = true;
	for (int j = 0; j < n - 1; j++)
	{
		if (list[j] > list[j + 1])
			isUp = false;
	}

	cout << "The list is " << (isUp ? "already sorted" : "not sorted");

	return 0;
}