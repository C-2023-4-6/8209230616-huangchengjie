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
	cout << "请分别输入长方体的长宽高：" ;
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
	cout << "第一个长方体的体积为：" << c1.count() << endl;
	cout << "第二个长方体的体积为：" << c2.count() << endl;
	cout << "第三个长方体的体积为：" << c3.count();
	return 0;
}