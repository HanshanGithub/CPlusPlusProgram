#include <iostream>
using namespace std;

int main()
{
	cout << "Enter r1's center x-, y-coordinates, width, and height: ";
	double x1, y1, w1, h1;
	cin >> x1 >> y1 >> w1 >> h1;
	cout << "Enter r2's center x-, y-coordinates, width, and height: ";
	double x2, y2, w2, h2;
	cin >> x2 >> y2 >> w2 >> h2;
	if (x1 - x2 >= w2 / 2 - w1 / 2 && x1 - x2 <= w1 / 2 - w2 / 2 && y1 - y2 >= h2 / 2 - h1 / 2 && y1 - y2 <= h1 / 2 - h2 / 2)
		cout << "r2 is inside r1.";
	else if (x1 - x2 > -w2 / 2 - w1 / 2 && x1 - x2 < w1 / 2 + w2 / 2 && y1 - y2 > -h2 / 2 - h1 / 2 && y1 - y2 < h1 / 2 + h2 / 2)
		cout << "r2 oberlaps r1.";
	else
		cout << "r2 does not oberlap r1.";

	return 0;
}
//�ܼ򵥵���ѧ˼άת��Ϊ���֣���ô��Ū����ô�ã���������
//����Ѱ�ҹ�ϵ��Ȼ�����������������Ϊʲô����������쿪������