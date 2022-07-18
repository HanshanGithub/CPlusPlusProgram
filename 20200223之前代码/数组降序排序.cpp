#include <iostream>
using namespace std;


void selectionSort(double list[], int listSize)
{
	for (int i = 0; i < listSize - 1; i++)
	{
		double currentMin = list[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < listSize; j++)
		{
			if (currentMin < list[j])  //if (currentMin > list[j])   �������У������Ķ�һ�����ż��ɡ��һ��˰��СʱȥŪ�����ķ��ţ�˵���Գ���ʵ�ʲ���⣡
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}

		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
	}
	for (int i = 0; i < 7; i++)
		cout << list[i] << "  ";
}

int main()
{
	double list[] = { 12, 32, 41, 1,13,43,11 };
	/*bool changed = true; //ð�ݷ�����
	do
	{
		changed = false;
		for (int j = 0; j < 6; j++)
			if (list[j] > list[j + 1])
			{
				//swap nums[j] with nums[j + 1];
				int tem = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tem;
				changed = true; //���е����һ�����϶�Ϊ�档
			}
	} while (changed);

	for (int i = 0; i < 7; i++)
		cout << list[i] << "  ";
		*/
	selectionSort(list, 7);

	return 0;
}