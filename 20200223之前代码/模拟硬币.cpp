#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int count0 = 0, count1 = 0;
	int n;
	cout << "����ģ��Ͷ��Ӳ�Ҵ�����";
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		int index = rand() % 2;
		(index == 0 ? count0++ : count1++);
	}
	cout << "����: " << count0 << " ��" << endl;
	cout << "����: " << count1 << " ��" << endl;

	return 0;
}
//Ϊʲôһ������޷����У�����
// ����ֵ����������
