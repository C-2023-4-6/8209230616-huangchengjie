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
	cout << "������������С������Ϊ��" << flag*b << endl;
}
int main()
{
	unsigned int m, n;
	cout << "������������" ;
	cin >> m >> n ;
	f1(m, n);
	cout << "�����������������Ϊ��" << n<< endl;
	
	return 0;
}