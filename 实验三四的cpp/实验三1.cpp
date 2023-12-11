#include<iostream>
using namespace std;
void f1(unsigned int &a, unsigned int &b)
{
	int flag = 0;
	if (a < b)
	{
		int t;
		flag = b;
		t = a, a = b, b = t;
		
	}
	else { flag = a; }
	int i = a % b;
	while (i != 0)
	{
		a = b, b = i, i = a % b;
	}
	cout << "这两个数的最小公倍数为：" << flag*b << endl;
}
int main()
{
	unsigned int m, n;
	cout << "输入两个数：" ;
	cin >> m >> n ;
	f1(m, n);
	cout << "这两个数的最大公因数为：" << n<< endl;
	
	return 0;
}