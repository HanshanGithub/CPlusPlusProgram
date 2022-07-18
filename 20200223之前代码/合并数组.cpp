#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list[]);
int n1, n2, n;
int list1[80], list2[80], list[160];
int main()
{
	cout << "Enter the list1: ";
	cin >> n1;
	for (int i = 0; i < n1; i++)
		cin >> list1[i];

	cout << "Enter the list2: ";
	cin >> n2;
	for (int i = 0; i < n2; i++)
		cin >> list2[i];

	for (int i = 0; i < n1; i++)
		list[i] = list1[i];
	for (int i = n1; i < n1 + n2; i++)
		list[i] = list2[i - n1];

	merge(list1, n1, list2, n2, list);

	return 0;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list[])
{
	bool changed = true;
	do 
	{
		changed = false;
		for (int j = 0; j < n1 + n2 - 1; j++)
			if (list[j] > list[j + 1])
			{
				int tem = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tem;
				changed = true;
			}
	} while (changed);

	cout << "The merged list is ";
	for (int i = 0; i < n1 + n2; i++)
		cout << list[i] << "  ";
}