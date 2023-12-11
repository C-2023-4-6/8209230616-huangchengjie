#include<iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形三边长：";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << "该三角形的面积为：" << _area(a, b, c) << endl;
	}
	else cout << "该三角形的数据不合法" << endl;
	return 0;
}