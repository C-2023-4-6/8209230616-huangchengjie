#include<iostream>
using namespace std;
int main()
{
	char n;
	cout << "������һ����ĸ" << endl;
	cin >> n;
	if (n >= 'a' && n <= 'z')
	{
		cout << char(n - 32) << endl;
	}
	else
	{
		cout << n + 1<< endl;
    }
	return 0;
}