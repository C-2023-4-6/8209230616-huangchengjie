#include<iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "���������������߳���";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << "�������ε����Ϊ��" << _area(a, b, c) << endl;
	}
	else cout << "�������ε����ݲ��Ϸ�" << endl;
	return 0;
}