#include <iostream>
using namespace std;

int main()
{
	cout << "分别输入三个数字： ";
	int n1, n2, n3, max1, max2, max;
	cin >> n1 >> n2 >> n3;

	int(n1 < n2 ? max1 = n2 : max1 = n1), (max1 < n3 ? max2 = n3 : max2 = max1);
	cout << "The max number is " << max2;
	/*
	if (n1 < n2)
		max1 = n2;
	else
		max1 = n1;
	if (max1 < n3)
		max2 = n3;
	else
		max2 = max1;

	cout << "The max number is " << max2;
	*/
	//-----------------------------断点处------------------------------ 
	/*
	cout << "The max number is ";
	
	if (n1 < n2)
	{
		if (n2 < n3)
			cout << n3;
		else
			cout << n2;
	}
	else
	{
		if (n1 > n3)
			cout << n1;
		else
			cout << n3;
	}
	*/

	return 0;
}