
//���ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ����
// �ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ�
// �ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���
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
	cout << "�ܹ��У�" << fx(day) << endl;
	return 0 ;
}