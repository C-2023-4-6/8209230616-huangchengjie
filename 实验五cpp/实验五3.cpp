#include<iostream>
using namespace std;
class cuboid
{
private:
	double length;
	double wideth;
	double height;
public:
	void setin();
	double count();
	cuboid()
	{
		length = 0;wideth = 0;height = 0;
	}
};
void cuboid::setin()
{
	cout << "��ֱ����볤����ĳ���ߣ�" ;
	cin >> length >> wideth >> height;
}
double cuboid::count()
{
	return (length * wideth * height);
}
int main()
{
	cuboid c1,c2,c3;
	c1.setin();
	c2.setin();
	c3.setin();
	cout << "��һ������������Ϊ��" << c1.count() << endl;
	cout << "�ڶ�������������Ϊ��" << c2.count() << endl;
	cout << "����������������Ϊ��" << c3.count();
	return 0;
}