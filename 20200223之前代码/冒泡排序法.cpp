#include <iostream>
using namespace std;

int main()
{
	cout << "Enter ten numbsers: ";
	double n;
	double nums[10];
	for (int i = 0; i < 10; i++)
		cin >> nums[i];

	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (nums[j] > nums[j + 1])
			{
				//swap nums[j] with nums[j + 1];
				int tem = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tem;
				changed = true; //���е����һ�����϶�Ϊ�档
			}
	} while (changed);

	for (int i = 0; i < 10; i++)
		cout << nums[i] << "  ";

	return 0;
}
