#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int indexOf(char s1[], char s2[]);

int main()
{
	const int C = 1000;
	char s1[C];
	char s2[C];
	cout << "Enter the first sentence: ";
	cin.getline(s1, C);
	cout << "Enter the second sentence: ";
	cin.getline(s2, C);

	indexOf(s1, s2);

	return 0;
}

int indexOf(char s1[],  char s2[])
{
	int L1 = 0;
	for (; s1[L1] != '\0'; L1++);

	int L2 = 0;
	for (; s2[L2] != '\0'; L2++);

	//bool isInside = true;
	int I, find = -1;
	for (I=0; I < L2; I++)
	{
		if (s2[I] == s1[0])
			find = I;
	}

	bool isInside = true;
	for (int j = 1; j < L1; j++)
	{
		if (s2[j + find] != s1[j])
		{
			isInside = false;
			break;
		}
	}

	cout << (isInside ? "\t\tYes,you are right." : "\t\tNo,you are wrong.");

	return 0;
}