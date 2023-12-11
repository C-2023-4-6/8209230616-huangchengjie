//起泡排序：
// 编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。
#include<iostream>
using namespace std;
void fx(double *a)
{
	int n = 1;
	do
	{
		n = 0;
		for (int i = 0;i < 9;i++)
		if(a[i]>a[i+1])
		{ 
			int t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
			n = 1;
		}
	} while (n);
}
int main()
{
	double a[10];
	for (int i = 0;i < 10;i++)
		cin >> a[i];
	fx(a);
	for (int i = 0;i < 10;i++)
		cout << a[i] << "\t";
	return 0;
}