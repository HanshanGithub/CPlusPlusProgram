#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 0, point, max = 0, max2;
	string name, Name, Name2;
	cout << "����ѧ����������";
	int NUMBER;
	cin >> NUMBER;
	while (number < NUMBER)
	{
		cout << "����ѧ�������ͷ�����";
		cin >> name >> point;
		number++;
		if (point > max)
			max = point, Name = name;
		else
			max = max; Name = Name;
	}
	cout << "�ɼ���ߵ�ѧ�����ֺͷ�����" << Name << "    " << max;
	cout << "�ɼ��ڶ���ѧ�����ֺͷ�����" << Name2 << "    " << max2;

	return 0;
}

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 0, point, max = 0;
	string name, Name;
	cout << "����ѧ����������";
	int NUMBER;
	cin >> NUMBER;
	while (number < NUMBER)
	{
		cout << "����ѧ�������ͷ�����";
		cin >> name >> point;
		number++;
		if (point > max)
			max = point, Name = name;
		else
			max = max; Name = Name;
	}
	cout << "�ɼ���ߵ�ѧ�����ֺͷ�����"<< Name <<"    " << max;

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