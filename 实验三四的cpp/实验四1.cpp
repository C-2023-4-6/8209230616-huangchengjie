#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	
	int b[10]; int a[10]; int N = 0;
	cout << "请输入十个数：" << endl;
	for(int n=0;n<=9;n++)
		cin >> b[n];
	
	for (int i = 0;i <= 9;i++)
	{
		int k = 1;
		for (int j = 0;j < i;j++)
		{
			if (b[i] == b[j])
			{
				k = 0;
			}
		}
		if (k)
		{
			a[N] = b[i];
			N++;
		}
	}
	for (int k = 0;k < N;k++)
		cout << a[k] << "\t";
	return 0;
	
	

}