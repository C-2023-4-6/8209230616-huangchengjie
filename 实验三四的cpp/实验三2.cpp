#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	int i;
	for (i = 2;i <= sqrt(num);i++)
		if (num % i == 0)
			return 0;
	return 1;
}
int main()
{
	int maxnum,n,t=0;
	cin >> maxnum;
	for(n=2;n<=maxnum;n++)
		if (is_prime(n) == 1)
		{
			t++;
			if (t % 10 == 0)
			{
				cout << n << endl;
				//continue;此处也可以用continue来跳回循环
			}
			else cout <<n<< "\t";
		}
	return 0;
}
//cout << n << "\t";
//if (t++ % 10 == 0)
//cout << endl;