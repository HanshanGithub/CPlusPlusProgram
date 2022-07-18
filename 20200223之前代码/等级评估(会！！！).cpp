#include <iostream>
using namespace std;

int main()
{
	//输入学生人数
	cout << "Enter the number of students: ";
	int n;
	cin >> n;

	//输入学生成绩
	cout << "Enter " << n << " scores: ";
	int point;
	
	//建立数组,求最大值
	const int N = 10000;
	int points[N];
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> points[i];
		if (points[i] > max)
			max = points[i];
	}
	

	
	for (int i = 0; i < n; i++)
	{
		cout << "student " << i << " score is " << points[i] << " and grade is ";
		
		if (points[i] >= max - 10)
				cout << "A" << endl;
		else if (points[i] >= max - 20)
				cout << "B" << endl;
		else if (points[i] >= max - 30)
				cout << "C\n";
		else if (points[i] >= max - 40)
				cout << "D\n";
		else
				cout << "F\n";
		
	}
	
	return 0;
}
