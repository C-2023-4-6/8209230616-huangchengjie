#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ˽�õ�
	int hour;
	int minute;
	int sec;
public:
	Time() 
	{
		hour = 0, minute = 0, sec = 0;
	}
	void settime()             //�����趨��ʱ�� 
	{
		cout << "������һ��ʱ�䣺" << endl;
		cin >> hour >> minute >> sec;
	}
	void showtime()
	{
		cout << hour<<":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;                   //����t1ΪTime�����
	t1.settime();
	t1.showtime();
	return 0;
}
