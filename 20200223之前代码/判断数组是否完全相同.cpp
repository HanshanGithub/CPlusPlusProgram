#include <iostream>
using namespace std;

bool isEqual(const int list1[], const int list2[], int size);
int list1[20], list2[20];
int nums1;

int main()
{
	cout << "Enter list1: ";
	
	cin >> nums1;
	for (int i = 0; i < nums1; i++)
		cin >> list1[i];

	cout << "Enter list2: ";
	int nums2;
	cin >> nums2;
	for (int i = 0; i < nums2; i++)
		cin >> list2[i];

	isEqual(list1, list2, nums1);

	return 0;
}

bool isEqual(const int list1[], const int list2[], int size)
{
	bool isEqual = true;
	for (int j = 0; j < nums1; j++)
		if (list1[j] != list2[j])
			isEqual = false;

	cout << "Two list are " << (isEqual ? "strictly " : "not strictly ") << "identical";
	return 0;
}