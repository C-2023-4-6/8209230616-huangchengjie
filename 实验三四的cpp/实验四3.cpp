#include<iostream>
using namespace std;
int main()
{
	bool a[101] = { 0 };
	for(int i=1;i<=100;i++)
	{
		a[i] = 1;
	}
	for (int i = 2;i < 101;i++)
	{
		for (int j = i;j < 101;j += (i+1))
		{
			if (a[j])
			{
				a[j] = 0;
			}
			else a[j] = 1;
		}
	}
	for (int i = 1;i <= 100;i++)
	{
		if (a[i])
		{
			cout << "L" << i << " ";
		}
	}
	return 0;
}