#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "请输入一个数" << endl;
	cin >> a;
	float b=fabs(a) , c = (fabs(a) + 1) / 2;
	while (fabs(c - b)>= 1e-5)
	{
		b = c;
		c = (b + fabs(a) /b) / 2;
	}
	if (a >= 0)
		cout << "此数的平方根= " << c << endl;
	else
		cout << "此数的平方根= " << c << "i" << endl;
	return 0;
}