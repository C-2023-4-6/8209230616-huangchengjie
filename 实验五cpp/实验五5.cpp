#include<iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	point(int X, int Y)
	{
		this->x = X;
		this->y = Y;
	}
	void setpoint(int i, int j);
	void display();
};
void point::setpoint(int i, int j)
{
	this->x = x+i;
	this->y = y+j;
}
void point::display()
{
	cout << "�ƶ��������Ϊ��" << "(" << x << "," << y << ")" << endl;
}
int main()
{
	int i , j ;
	cout << "��ֱ������������������ƶ���ֵ��";
	cin >> i >> j;
	point p1(60, 80);
	p1.setpoint(i,j);
	p1.display();
	return 0;
}