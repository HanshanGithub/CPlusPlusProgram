#include <iostream>
using namespace std;

int partition(int list[], int size);
int n, list[80], min[80], max[80];
int MIN = 0, MAX = 0;

int main()
{
	cout << "Enter list: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> list[i];

	partition(list, n);

	return 0;
}

int partition(int list[], int size)
{
	/*for (int j = 0, i = 0; list[i + 1] > list[0]; j++, i++, MAX++)
		max[j] = list[i + 1];
	for (int j = 0, i = 0; list[i + 1] < list[0]; j++, MIN++)
		min[j] = list[i + 1];*/
	for (int I = 0; I < n; I++)
	{
		if (list[I] > list[0])
		{
			max[MAX] = list[I];
			MAX++;
		}
		if (list[I] < list[0])
		{
			min[MIN] = list[I];
			MIN++;
		}
	}
	cout << "After the partition, the list is ";
	for (int i = 0; i < MIN; i++)
		cout << min[i] << "  ";
	cout << list[0] << "  ";
	for (int i = 0; i < MAX; i++)
		cout << max[i] << "  ";

	return 0;
}