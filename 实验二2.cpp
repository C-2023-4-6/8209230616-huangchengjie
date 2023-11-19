#include<iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (x <= 0 || x >= 10)
		cout << "你输出的数字不在范围内" <<endl;
	if (x>0&&x<10)
		if(x>=5)
		cout <<x * x << endl;
	else if (x>=1)
		cout << 2 / (4 * x) + 1 << endl;
	else cout << 3-2*x << endl;
	return 0;
}