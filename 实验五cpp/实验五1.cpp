#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为私用的
	int hour;
	int minute;
	int sec;
public:
	Time() 
	{
		hour = 0, minute = 0, sec = 0;
	}
	void settime()             //输入设定的时间 
	{
		cout << "请输入一个时间：" << endl;
		cin >> hour >> minute >> sec;
	}
	void showtime()
	{
		cout << hour<<":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;                   //定义t1为Time类对象
	t1.settime();
	t1.showtime();
	return 0;
}
