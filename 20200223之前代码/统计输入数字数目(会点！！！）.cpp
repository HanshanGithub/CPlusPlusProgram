#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the integers between 1 and 100: ";
	const int N = 100;
	int nums[N], count[N];
	int counts = 0;

	//建立数组
	for (int i = 0; i < 100 && nums[i - 1] != 0; i++)
	{
		cin >> nums[i];
		counts++;
	}

	//排序数组
	for (int i = 0; i < counts - 1; i++)
	{
		double currentMin = nums[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < counts; j++)
		{
			if (currentMin > nums[j])  
			{
				currentMin = nums[j];
				currentMinIndex = j;
			}
		}

		if (currentMinIndex != i)
		{
			nums[currentMinIndex] = nums[i];
			nums[i] = currentMin;
		}
	}

	for (int i = 0; i < 100; i++)
		count[i] = 0;
	
	//统计数目
	for (int j = 0; j < counts; j++)
	{
		count[nums[j] - 0]++;
	}


	for (int i = 0; i < counts; i++)
	{
		if (nums[i] != nums[i - 1] && nums[i]!= 0)
			cout << nums[i] << " occurs " << count[nums[i]] << (count[nums[i]] > 1 ? " times" : " time") << endl;
	
	}

	return 0;
}