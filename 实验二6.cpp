#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	c =( a < b ? a : b);                                             //求最大公约数
	for (i = c;a % i != 0 || b % i != 0;i--)
		;
	cout << "最大公约数= " << i << endl;
	c = (a < b ? b : a);                                             //求最小公倍数
	for (i = c; i % a != 0 || i % b != 0;i++)
		;
	cout << "最小公倍数= " << i << endl;
	return 0;
}