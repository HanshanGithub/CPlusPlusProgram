#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

/*
unsigned int strlen(char city[])
{
	int i = 0;
	for (; city[i] != '\0'; i++);
	
	cout << "The length is " << i;

	return i;
}*/

int main()
{
	char city[30];
	cout << "Enter a city: ";
	cin.getline(city, 30, '\n');
	//strlen( city);
	size_t strlen(char city[]);
	
}




/*
		//对数组进行排序--调试失败 后成功
void selectionSort(double list[], int listSize)
{
	for (int i = 0; i < listSize - 1; i++)
	{
		double currentMin = list[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < listSize; j++)
		{
			if (currentMin > list[j])
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
	for (int i = 6; i >= 0; i--)
		cout << list[i] << "  ";
}

int main()
{
	double list[] = { 12, 32, 41, 1,13,43,11 };
	

	selectionSort(list, 7);

	return 0;
}

*/


/*		//二分法求关键字---调试失败
int binarySearch(const int list[], int key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	int mid = (low + high) / 2;
	while (high >= low)
	{
		
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;

	}
	cout << list[mid];

	return -low - 1;
}

int main()
{
	int list[] = { 4,5,6,7,8 };
	binarySearch(list, 5, 5);

	return 0;
}
*/



/*		//调试失败
void reverse(int list[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int tem = list[i];
		list[i] = list[size - 1 - i];
		list[size - 1 - i] = tem;
	}
}

int main()
{
	int list[] = { 1, 2, 3, 4, 5 };
	int size = 5;
	reverse(list, size);
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";

	return 0;
}
*/


/*
void m( int x, int y[])
{
	x = 3;
	y[0] = 3;
}

int main()
{
	int number = 0;
	int numbers[1];

	m(number, numbers);

	cout << "number is " << number << " and numbers[0] is " << numbers[0];

	return 0;
}
*/



/*			//反转数组
void reverse(int list[], int newList[], int size)//void reverse(const int list[], int newList[], int size) 无区别？？？ const用来干嘛的？
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		newList[j] = list[i];
	}
}

void printArray(int list[], int size)//void printArray(const int list[], int size) 无区别？？？
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}

int main()
{
	int list[] = { 1, 2, 3, 4, 5, 6 };
	int newList[6];

	reverse(list, newList, 6);

	cout << "The original array: ";
	printArray(list, 6);
	cout << endl;

	cout << "The reversed attay: ";
	printArray(newList, 6);
	cout << endl;

	return 0;
}
*/



/*
void p(const int list[], int arraySize)
{
	list[0] = 100;
}

int mian()
{
	int numbers[5] = { 1, 4, 3, 6, 8 };
	p(numbers, 5);

	return 0;
}
*/