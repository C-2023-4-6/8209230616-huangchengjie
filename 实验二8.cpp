#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "������һ����" << endl;
	cin >> a;
	float b=fabs(a) , c = (fabs(a) + 1) / 2;
	while (fabs(c - b)>= 1e-5)
	{
		b = c;
		c = (b + fabs(a) /b) / 2;
	}
	if (a >= 0)
		cout << "������ƽ����= " << c << endl;
	else
		cout << "������ƽ����= " << c << "i" << endl;
	return 0;
}