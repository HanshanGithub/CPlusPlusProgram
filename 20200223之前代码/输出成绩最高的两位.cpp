#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 0, point, max = 0, max2;
	string name, Name, Name2;
	cout << "输入学生总人数：";
	int NUMBER;
	cin >> NUMBER;
	while (number < NUMBER)
	{
		cout << "输入学生姓名和分数：";
		cin >> name >> point;
		number++;
		if (point > max)
			max = point, Name = name;
		else
			max = max; Name = Name;
	}
	cout << "成绩最高的学生名字和分数：" << Name << "    " << max;
	cout << "成绩第二的学生名字和分数：" << Name2 << "    " << max2;

	return 0;
}

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 0, point, max = 0;
	string name, Name;
	cout << "输入学生总人数：";
	int NUMBER;
	cin >> NUMBER;
	while (number < NUMBER)
	{
		cout << "输入学生姓名和分数：";
		cin >> name >> point;
		number++;
		if (point > max)
			max = point, Name = name;
		else
			max = max; Name = Name;
	}
	cout << "成绩最高的学生名字和分数："<< Name <<"    " << max;

	return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
	int titue = 10000;
	int year = 1;
	int sum = 10000;
	while (year < 4)
	{
		year++;
		titue = titue * (1 + 0.05);
		sum += titue;
	}
	cout << sum;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int titue = 10000;
	int year = 1;
	cout << year << "         " << titue << endl;
	while (year < 10)
	{
		year++;
		titue = titue * (1 + 0.05);
		cout << year << "         " << titue << endl;
	}
	

	return 0;
}*/