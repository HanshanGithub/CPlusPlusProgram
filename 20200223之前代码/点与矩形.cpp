#include <iostream>
using namespace std;

int main()
{
	cout << "���루 �� �����λ�ã� ";
	double x, y;
	cin >> x >> y;
	if (x <= 5 && x >= -5 && y >= -2.5 && y <= 2.5)
		cout << "��(" << x << ", " << y << ")�ھ����ڡ�";
	else
		cout << "foolish! ";
	
	return 0;
}