#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//��ʾ��
	cout << "Enter the number of balls to drop: ";
	int ball;
	cin >> ball;
	cout << "Enter the number of slots in the bean machine(0-50): ";
	int slot;
	cin >> slot;

	//�������飬ģ�ⵯײ����:R=1;L=0
	srand(time(0));
	int slots[50];
	for (int i = 0; i < 50; i++)
		slots[i] = 0;
	for (int i = 0; i < ball; i++)
	{
		int count0 = 0, count1 = 0;
		for (int j = 0; j < slot - 1; j++)
		{
			int index = rand() % 2;
			int(index > 0 ? count1++ : count0++);
			//cout << (index == 0 ? "L" : "R");
		}
		//cout << endl;
		slots[count1]++;
		
	}
	for (int i = 0; i < slot; i++)
		cout << "�� " << setw(2) << i + 1 << " ���ŵ����� " << slots[i] << endl;

	return 0;
}