#include <iostream>
using namespace std;

int main()
{
	double radius;
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius;
	int length;
	cin >> length;
	double area = radius * radius * 3.14159;
	double volume = area * length;
	cout << "The area is " << area << endl << "The volume is " << volume;
	//出现了疑问，endl int double 等类型有何不一样，似乎我已经断层了，不知道怎么看发生了什么东西
	//仅仅知道公式的样子，套进去，但是并不理解是如何来的

	return 0;
}
