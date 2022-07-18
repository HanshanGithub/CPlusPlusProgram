#include <iostream>
using namespace std;

int list1[10], list2[10], list[10];

int main()
{
	cout << "Enter list1: ";
	for (int i = 0; i < 10; i++)
		cin >> list1[i];
	cout << "Enter list2: ";
	for (int i = 0; i < 10; i++)
		cin >> list2[i];

	//¼ì²âÊı×Ö
	int N = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (list1[i] == list2[j])
			{
				list[N] = list1[i];
				N++;
			}
		}
	}
	if (N != 0)
	{
		cout << "The common elements are ";
		for (int i = 0; i < N; i++)
			cout << list[i] << "  ";
	}
	else
		cout << "The two lists is not common lement";

	return 0;
}