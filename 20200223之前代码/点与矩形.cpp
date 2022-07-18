#include <iostream>
using namespace std;

int main()
{
	cout << "输入（ ， ）点的位置： ";
	double x, y;
	cin >> x >> y;
	if (x <= 5 && x >= -5 && y >= -2.5 && y <= 2.5)
		cout << "点(" << x << ", " << y << ")在矩形内。";
	else
		cout << "foolish! ";
	
	return 0;
}