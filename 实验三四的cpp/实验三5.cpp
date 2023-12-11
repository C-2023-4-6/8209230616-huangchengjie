
//猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
// 第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，
// 问，第一天猴子共摘多少桃子（用递归实现）。
#include<iostream>
using namespace std;
int fx(int day)
{
	int sum = 1;
	for (int i = 1;i < day;i++)
	{
		sum = (sum + 1) * 2;
	}
	return sum;
}
int main()
{
	int day = 10;
	cout << "总共有：" << fx(day) << endl;
	return 0 ;
}