#include<iostream>
using namespace std;
class student
{
private:
	long num;
	float score;
public:
	void max(student* p);
	void getdata();
};
void student::max(student* p)
{
	for (int i = 0;i < 5;i++)
	{
        if (p[0].score < p[i].score)
		{
			p[0].score = p[i].score;
			p[0].num = p[i].num;
		}
	}
	cout << "��߳ɼ�Ϊ:" << p[0].score << "     ��ѧ����ѧ��Ϊ��" << p[0].num << endl;
}
void student::getdata()
{
	cout << "�ֱ�����һ��ѧ����ѧ�źͷ�����";
	cin >> num >> score;
}
int main()
{
	student stu[5];
	for (int i = 0;i < 5;i++)
	{
		stu[i].getdata();
	}
	student* p = stu;
	p->max(p);
	return 0;
}