#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a, b, c : ";
	double a, b, c;
	cin >> a >> b >> c;
	double h = b * b - 4 * a * c;
	if (h > 0)
	{
		double r1 = (-b + pow(h, 0.5)) / 2 / a, r2 = (-b - pow(h, 0.5)) / 2 / a;
		cout << "The roots are " << r1 << " and " << r2;
	}
	else if (h == 0)
	{
		double r0 = -b / 2 / a;
		cout << "The root is " << r0;
	}
	else
		cout << "The equation has no real roots";
	//���һ��else ���ټ�if�� cin����Ҫ�ö��>> >> >> ��������
	cout << endl;
	system("pause");
	return 0;
}