#include <iostream>
using namespace std;

bool isline(const int values[], int size);
int n;

int main()
{
	cout << "Enter the number of balues: ";
	
	cin >> n;
	cout << "Enter the values: ";
	int values[80];
	for (int i = 0; i < n; i++)
		cin >> values[i];

	isline(values, n);

	return 0;
}

bool isline(const int values[], int size)
{
	bool isline = false;
	for (int i = 0; i < n; i++)
	{
		if (values[i] == values[i + 1])
		{
			if (values[i] == values[i + 2])
			{
				if (values[i] == values[i + 3])
					isline = true;
			}
		}
	}
	cout << "The list has " << (isline ? "consecutive " : "not consecutive ") << "fours";

	return 0;
}