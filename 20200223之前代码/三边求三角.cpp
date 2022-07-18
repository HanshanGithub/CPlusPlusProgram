#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Enter the coordinates of three pointss separated " << endl << "By spaces like x1 y1 x2 y2 x3 y3: ";
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)); //sqrt :对括号内的数进行开平方
	double c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	//求三边的长度
	double A = acos((a * a - b * b - c * c) / (-2 * b * c));
	double B = acos((b * b - a * a - c * c) / (-2 * a * c));
	double C = acos((c * c - b * b - a * a) / (-2 * b * a));
	//求三角的公式
	const double PI = 3.14159;
	//定义常数Π
	cout << "The three angles are " << A * 180 / PI << " " << B * 180 / PI << " " << C * 180 / PI << endl;

	return 0;
}
//下面是随机三点求三角
/*
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(0));
	double x1 = 40 * cos((rand() % 361) * 2 * 3.14159 / 360), y1 = 40 * sin((rand() % 361) * 2 * 3.14159 / 360);
	double x2 = 40 * cos((rand() % 361) * 2 * 3.14159 / 360), y2 = 40 * sin((rand() % 361) * 2 * 3.14159 / 360);
	double x3 = 40 * cos((rand() % 361) * 2 * 3.14159 / 360), y3 = 40 * sin((rand() % 361) * 2 * 3.14159 / 360);
	double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)); //sqrt :对括号内的数进行开平方
	double c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	//求三边的长度
	double A = acos((a * a - b * b - c * c) / (-2 * b * c));
	double B = acos((b * b - a * a - c * c) / (-2 * a * c));
	double C = acos((c * c - b * b - a * a) / (-2 * b * a));
	//求三角的公式
	const double PI = 3.14159;
	//定义常数Π
	cout << "三点 " << endl << fixed << setprecision(2) << x1 <<","<< y1 << endl << x2 << "," << y2 << endl << x3 << "," << y3 << endl << "构成的三角形，三个角分别为 "
		<< endl << A * 180 / PI << endl << B * 180 / PI << endl << C * 180 / PI << endl;
	cout <<"三个相加之和等于"<< A * 180 / PI + B * 180 / PI + C * 180 / PI;
	return 0;
}
*/