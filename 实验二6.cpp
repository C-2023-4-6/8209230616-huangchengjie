#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i;
	cout << "����������������" << endl;
	cin >> a >> b;
	c =( a < b ? a : b);                                             //�����Լ��
	for (i = c;a % i != 0 || b % i != 0;i--)
		;
	cout << "���Լ��= " << i << endl;
	c = (a < b ? b : a);                                             //����С������
	for (i = c; i % a != 0 || i % b != 0;i++)
		;
	cout << "��С������= " << i << endl;
	return 0;
}